#include "zipdigit.h"



ZipDigit::ZipDigit(){}
ZipDigit::ZipDigit(string ZipdigitValue):digitValue_str(ZipdigitValue){}

void ZipDigit::set_digitValue(string new_digitValue){
    digitValue_str=new_digitValue;
}

string ZipDigit::get_digitStr(){
    parseDigit();
    return digitStr;
}

bool ZipDigit::convert_and_check(){
    do{
    bool flag=false;
    if(digitValue_str.length()!=LEN){
        flag=true;
        
    }
    else{
        for(int i=0;i<LEN;i++){
            if((int)digitValue_str[i]<48||(int)digitValue_str[i]>57){
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"invaild zip code"<<endl;
        cout<<"Do you want to re-enter (y/n): ";
        string d="n";
        cin>>d;
        if(d=="y"){
            string zipcode;
            cout<<"zip code: ";
            cin>>zipcode;
            set_digitValue(zipcode);
            
        }else{
            return false;
            
        }
    }else{
        stringstream(digitValue_str)>>digitValue;
        return true;
        
    }
    }while(true);
    
    
    
    

    
   
}

void ZipDigit::parseDigit(){
    int temp;
    if(convert_and_check()){
        temp=digitValue;
        for(int i=LEN;i>0;i--){
            digitNum[i-1]=temp%10;
            temp=temp/10;
        }
    
    
        
        for(int i=0;i<LEN;i++){
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
                default: cout<<"parseDigit() switch error";exit(1);break;
            }
            
        }
        
        for(int i=0;i<LEN;i++){
            digitStr += digitString[i];
        }
    }
    
    
    
}





