#include "zipdigit.h"



ZipDigit::ZipDigit(){}
ZipDigit::ZipDigit(int ZipdigitValue):digitValue(ZipdigitValue){}

void ZipDigit::set_digitValue(int new_digitValue){
    digitValue=new_digitValue;
}

string ZipDigit::get_digitStr(){
    return digitStr;
}

bool ZipDigit::check(){
    string d="n";
    int zipcode;
    
    do{
        //cout<<digitValue<<endl;
        if(digitValue<0||digitValue>99999){
           // cout<<1<<endl;
            cout<<"invaild zip code"<<endl;
            cout<<"Do you want to re-enter (y/n): ";
            cin>>d;
            if(d=="n"){
                return false;
            }else{
                cout<<"zip code: ";
                cin>>zipcode;
                set_digitValue(zipcode);
            }
        }
        
            
            return true;
    }while(true);
}

void ZipDigit::parseDigit(){
    int temp;
    temp=digitValue;
    for(int i=LEN;i>0;i--){
        digitNum[i-1]=temp%10;
        temp=temp/10;
    }

    if(check()){
        
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





/*class ZipCode{
private:
    int decimalValue;
    
    
public:
    Zip();
    Zip(int decimalValue);
    Zip(string binaryString();
    int getValue();
    string getbinaryString();
    bool parseCode(string binaryString);//check vaild or not
        

};


bool Zip::parseCode(string binaryString){
        
}*/