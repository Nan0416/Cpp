#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream in_file;
    ofstream out_file,out_file2,out_file3,out_file4;
    string location_in="qin.txt";     // permission must have w or sudo
    string location_out="nan_char.txt";
    string location_out2="nan_string.txt";
    string location_out3="nan_get.txt";
    string location_out2_c="nan_string_c.txt";
    char i;
    string j;
    string k;
    char p;
    in_file.open(location_in);
    if(in_file.fail()){
        cout<<"fail to open "<<location_in<<endl;
        exit(1);
    }
    out_file.open(location_out);
    if(out_file.fail()){              //if file have exits, but without permission w
        cout<<"faile to open "<<location_out<<endl;
        exit(1);
    }
    out_file2.open(location_out2);
    if(out_file.fail()){
        cout<<"faile to open "<<location_out2<<endl;
        exit(1);
    }
   
    
    while(true){
        in_file>>i;
        //cout<<i<<endl;
        if(in_file.eof()){
            break;
        }
      //  cout<<i<<endl;
        out_file<<i;
    }
    out_file.close();  //must be written here, or it will disappear
    in_file.close();
    in_file.open(location_in);//must be reopened, or the data can be written
    while(true){
        cout<<j<<"1"<<endl;
       if(in_file.eof()){ //  eof judge the in_file last output whether or not vaild, it is continue.
           break;           // so the last value is j=:wq is ok. however,it has been written into the file.
        }
        cout<<j<<"2"<<endl;
       in_file>>j;
       out_file2<<j;
        cout<<j<<"3"<<endl;
    }
    out_file2.close();
    in_file.close();
    in_file.open(location_in);//must be reopened, or the data can be written
    out_file4.open(location_out2_c);
    while(!in_file.eof()){
        in_file>>k;
        out_file4<<k;
        
    }
    out_file4.close();

    
    
   // out_file.close();
    
    in_file.close();
    in_file.open(location_in);
    out_file3.open(location_out3);
    if(out_file3.fail()){
        cout<<"faile to open "<<location_out3<<endl;
        exit(1);
    }
    while(in_file.get(p)){
        out_file3.put(p);  //same format
    
    }
    out_file3.close();
    in_file.close();
    
    return 0;
    
}