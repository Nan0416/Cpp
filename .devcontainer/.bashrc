# ~/.bashrc

# If not running interactively, don't do anything
[ -z "$PS1" ] && return

# Prompt customization
export PS1="\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\W\[\033[00m\]\$ "