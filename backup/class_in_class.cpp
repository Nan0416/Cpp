#include <iostream>


class Out{
private:
    int data;
public:
    void setdata(int data_);
    int getdata() const;
//private: must be public, you can do Out::In instance
    class In{
    private:
        int inner;
    public:
        void setinner(int inner_);
        int getinner() const;
        int getoutter(const Out& out_) const;
    };
    In innerInstance;
    /*
     
     in contain class, I think there is not a innerInstance
     
     */
    //intelligent


};

int main(){
    Out outside;
    outside.setdata(-10);
    //outside
    Out::In insider;
    std::cout<<insider.getoutter(outside)<<std::endl;
    //outside.setinner(10);
    std::cout<<outside.innerInstance.getoutter(outside)<<std::endl;
    /*
     
     fuc* yourself
     
     */
    return 0;
}

void Out::setdata(int data_){
    data=data_;
}
int Out::getdata() const{
    return data;
}
void Out::In::setinner(int inner_){
    inner=inner_;
}
int Out::In::getinner() const{
    return inner;
}
int Out::In::getoutter(const Out& out_) const{
   // return data;
    /*
     
     becuase as above shown, you can just declare a inner class without outclass.
     
     */
    return out_.data;
    /*
     
     becasue In class in a inside class, so it can visit the outside private member;
     but you can do that with the assistance of outclass instance
     
     */
}
