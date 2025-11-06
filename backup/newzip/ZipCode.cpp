#include "ZipCode.hpp"
#include <cmath>
ZipCode::ZipCode(int zip){
    if(zip<0||zip>99999){
        cout<<"invaild zip code"<<endl;
        exit(1);
    }
    this->zip=zip;
    
}

ZipCode::ZipCode(string code){
    zip=parse_bar_code(code);

}
int ZipCode::get_zip_code(){
    return zip;

}
string ZipCode::get_bar_code(){
    int temp=zip;
    int digitNum[5];
    for(int i=0;i<5;i++){
        int mo=pow(10,4-i);
        digitNum[i]=temp/mo;
        temp=temp%mo;
    }
    string digitString[5];
    string digitStr;
        
        
        for(int i=0;i<5;i++){
            switch (digitNum[i]) {
                case 1: digitString[i]="00011";break;
                case 2: digitString[i]="00101";break;
                case 3: digitString[i]="00110";break;
                case 4: digitString[i]="01001";break;
                case 5: digitString[i]="01010";break;
                case 6: digitString[i]="01100";break;
                case 7: digitString[i]="10001";break;
                case 8: digitString[i]="10010";break;
                case 9: digitString[i]="10100";break;
                case 0: digitString[i]="11000";break;
                default: cout<<"digit to code error"<<endl;exit(1);break;
            }
            
        }
        
        for(int i=0;i<5;i++){
            digitStr += digitString[i];
        }
    
return digitStr;
}
int ZipCode::parse_bar_code(string code){
    string code_=code;
    ZipDigit zipdigit[5];
    
    for(int i=0;i<5;i++){
        
        ZipDigit temp(code_.substr(0+5*i,5));
        zipdigit[i]=temp;
    }
    zip=0;
    for(int i=0;i<5;i++){
        zip+=zipdigit[i].getDigit()*pow(10,4-i);
    }
    return zip;

}








