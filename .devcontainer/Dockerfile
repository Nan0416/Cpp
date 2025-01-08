FROM ubuntu-dev-base:v1

# Refers to the USER environment variable defined in the parent image.
ARG USERNAME=$USER

RUN apt-get install -y \
    libcurl4-openssl-dev \
    libpulse-dev \
    libssl-dev \
    uuid-dev \
    wget \
    xz-utils \
    zlib1g-dev


# Command above the lines need to be executed as root.
USER $USERNAME
WORKDIR /home/$USERNAME

EXPOSE 3000
COPY .bashrc /home/$USERNAME/.bashrc

# Build aws sdk
# reference: https://github.com/ingomueller-net/docker-aws-sdk-cpp/blob/master/Dockerfile
RUN mkdir awssdkcpp_install
RUN git clone --recurse-submodules https://github.com/aws/aws-sdk-cpp.git
RUN mkdir aws-sdk-cpp/build
RUN cd aws-sdk-cpp/build && \
    cmake .. \
    -DCMAKE_BUILD_TYPE=Debug \
    -DCMAKE_INSTALL_PREFIX=/home/$USERNAME/awssdkcpp_install \
    -DBUILD_ONLY="s3"

# Need to change directory again. A run always 
RUN cd aws-sdk-cpp/build && \
    cmake --build . --config=Debug && \
    cmake --install . --config=Debug