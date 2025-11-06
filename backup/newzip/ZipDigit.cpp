#include "ZipDigit.hpp"

ZipDigit::ZipDigit(){
    num=0;
    //default to 0
}
ZipDigit::ZipDigit(int num_){
    if(num_<0||num_>9){
        cout<<"input integer error"<<endl;
        exit(1);
    }
    num=num_;
}
ZipDigit::ZipDigit(string binary_){
    /* check */
    if(binary_.length()!=5){
        cout<<"input string error (length)"<<endl;
        exit(1);
    }
    int count1=0,count0=0;
    for(int i=0;i<5;i++){
        if(binary_[i]=='1'){
            count1++;
        }else if(binary_[i]=='0'){
            count0++;
        }else{
            cout<<"input string error (content)"<<endl;
            exit(1);
        }
    }
    if(count1!=2||count0!=3){
        cout<<"input string error (number of 1 and 0)"<<endl;
        exit(1);
    }
    /* storage */
    binary=binary_;
    /* conversion */
    int temp=0;
    for(int i=0;i<5;i++){
        switch (i) {
            case 0:temp += ((int)binary_[i]-(int)'0')*7;break;
            case 1:temp += ((int)binary_[i]-(int)'0')*4;break;
            case 2:temp += ((int)binary_[i]-(int)'0')*2;break;
            case 3:temp += ((int)binary_[i]-(int)'0')*1;break;
            case 4:temp += 0;break;
                
            default:break;
        }

    
    }
    if(temp==11){
        temp=0;
    }
    num=temp;
    
}
int ZipDigit::getDigit(){
    return num;
}

