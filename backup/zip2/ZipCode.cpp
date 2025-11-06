
#include "zipcode.h"
ZipCode::ZipCode(){
    for(int i=0;i<LENCode;i++){
        digitNum[i]=0;
    
    }
}
ZipCode::ZipCode(string binaryString):digitStr(binaryString){
    for(int i=0;i<LENCode;i++){
        digitNum[i]=0;
        
    }
}

int ZipCode::getValue(){
    if(parseCode()){
        return digitValue;
    }else{
        return -1;
    }
}
void ZipCode::setdigitStr(string binaryString){
    digitStr=binaryString;
}

bool ZipCode::convert_and_check(){
    
    do{
        bool flag=false;
        if(digitStr.length()!=LENCode*5){
            flag=true;
            
        }
        else{
            for(int i=0;i<LENCode;i++){
                for(int j=0;j<5;j++){
                    digitString[i][j]=digitStr[i*5+j];
                }
                int temp=0;
                for(int j=0;j<5;j++){
                    if(digitString[i][j]=='0'){
                        temp++;
                    }else if(digitString[i][j]!='1'){
                        flag=true;
                        break;
                    }
                }
                if(flag||temp!=3){
                    flag=true;
                    break;
                }
            }
        }
        if(flag){
            cout<<"invaild zip bar code."<<endl;
            cout<<"Do you want to re-enter (y/n): ";
            string d="n";
            cin>>d;
            if(d=="y"){
                string zipcode;
                cout<<"zip code: ";
                cin>>zipcode;
                setdigitStr(zipcode);
                
            }else{
                return false;
                
            }
        }else{
            return true;
            
        }
    }while(true);
  

}

bool ZipCode::parseCode(){
   

    if(convert_and_check()){
        for(int i=0;i<LENCode;i++){
            for(int j=0;j<5;j++){
                
                switch (j) {
                    case 0:digitNum[i] += ((int)digitStr[i*5+j]-(int)'0')*7;break;
                    case 1:digitNum[i] += ((int)digitStr[i*5+j]-(int)'0')*4;break;
                    case 2:digitNum[i] += ((int)digitStr[i*5+j]-(int)'0')*2;break;
                    case 3:digitNum[i] += ((int)digitStr[i*5+j]-(int)'0')*1;break;
                    case 4:digitNum[i] += ((int)digitStr[i*5+j]-(int)'0')*0;break;

                    default:break;
                }
            }
            if (digitNum[i]==11) {
                digitNum[i]=0;
            }

        }
       // cout<<endl<<digitStr<<endl;
        for(int i=0;i<LENCode;i++){
            digitValue += digitNum[i]*pow(10,LENCode-i-1);
        }
        return true;
    }
    return false;
    
 
 }

void ZipCode::output(){
    int h=getValue();
    if(h==-1){
        exit(1);
    }else{
        cout<<setw(5)<<setfill('0')<<h<<endl;
    }


}