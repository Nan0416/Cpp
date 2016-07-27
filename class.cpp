#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

enum alphabet {A=65,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,a=97,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};

typedef  struct arr_index{
    int index;
    double pre;
}arr_index;

const int NumAB=26;

/*------------------*/
class Alphabet{
private:
    
    string input_file_location;
    string output_file_location;
    string input_keyboard;
    string content;
    int length;
    int new_length;// after eliminate the space comma and so forth.
    int goal[NumAB];
    arr_index stat_info[NumAB];
    
public:
    /*  constructor  */
    Alphabet();
    
    /*  mutators  */
    void set_input_keyboard(string input_keyboard_that);
    void set_input_file_location(string input_file_location_that);
    void set_ouput_file_location(string output_file_location_that);
    //with parameter, this parameter should be from outside class
    void set_content_and_length_from_keyboard();
    void set_content_and_length_from_file();
    /*  accessprs  */
    string get_input_keyboard();
    string get_input_file_location();
    string get_output_file_location();
    
    /*  member method  */
    void stat_core();
    void sort();
    void output_to_screen();
    void from_input_file_output_to_file();
    void from_keyboard_output_to_file();
    
    
    
    
    
    
    
};

class CD : public Alphabet{
public:
    int j;

};
//after class with semicolon


int main(){
    CD test,test2;
    string info;
    cout<<"from screen input or from a file? (s/f) ";
    char d;
    cin>>d;
    cin.ignore();
    // awesome;
    
    if(d=='f'){
        
        cout<<"Enter location: ";
        getline(cin,info);
        test.set_input_file_location(info);
        test.set_content_and_length_from_file();
        
    }else if(d=='s'){
        cout<<"Please enter: ";
        getline(cin,info);
        test.set_input_keyboard(info);
        test.set_content_and_length_from_keyboard();
        
    }else{
        cout<<"wrong"<<endl;
        exit(1);
        
    }
    test.stat_core();
    test.sort();
    test2=test;
    //
    //the properties of test2 is same as test1, even the private properties
    // I thnink it directly to copy the memory
    //
    test2.output_to_screen();
    cout<<"Do you want to write the result into a file? (y/n) ";
    cin>>d;
    if(d=='y'){
        string location_2;
        cout<<"Save location: ";
        cin>>location_2;
        test.set_ouput_file_location(location_2);
        test.from_input_file_output_to_file();
    }
    return 0;
}






Alphabet::Alphabet(){
    for(int i=0;i<NumAB;i++){
        goal[i]=0;
    }
    
}

void Alphabet::set_input_keyboard(string input_keyboard_that){
    input_keyboard=input_keyboard_that;
}
void Alphabet::set_input_file_location(string input_file_location_that){
    input_file_location=input_file_location_that;
}
void Alphabet::set_ouput_file_location(string output_file_location_that){
    output_file_location=output_file_location_that;
}

void Alphabet::set_content_and_length_from_keyboard(){
    length=input_keyboard.length();
    content=input_keyboard;
}
void Alphabet::set_content_and_length_from_file(){
    ifstream file_in;
    file_in.open(input_file_location.c_str());
    if(file_in.fail()){
        cout<<"fail to open "<<input_file_location<<endl;
        exit(1);
    }
    getline(file_in,content);
    file_in.close();
    length=content.length();
}

string Alphabet::get_input_keyboard(){
    return input_keyboard;
}
string Alphabet::get_input_file_location(){
    return input_file_location;
}
string Alphabet::get_output_file_location(){
    return output_file_location;
}


void Alphabet::stat_core(){
    //int goal[NumAB];
    char arr[length];
    for(int i=0;i<length;i++){
        arr[i]=content[i];
    }
    int temp=length;
    int size_02=length;
    for(int i_01=0;i_01<temp;i_01++){
        int h_01=(int)arr[i_01];
        switch (h_01) {
            case A:
            case a: goal[0]++;break;
            case B:
            case b: goal[1]++;break;
            case C:
            case c: goal[2]++;break;
            case D:
            case d: goal[3]++;break;
            case E:
            case e: goal[4]++;break;
            case F:
            case f: goal[5]++;break;
            case G:
            case g: goal[6]++;break;
            case H:
            case h: goal[7]++;break;
            case I:
            case i: goal[8]++;break;
            case J:
            case j: goal[9]++;break;
            case K:
            case k: goal[10]++;break;
            case L:
            case l: goal[11]++;break;
            case M:
            case m: goal[12]++;break;
            case N:
            case n: goal[13]++;break;
            case O:
            case o:goal[14]++;break;
            case P:
            case p: goal[15]++;break;
            case Q:
            case q: goal[16]++;break;
            case R:
            case r: goal[17]++;break;
            case S:
            case s: goal[18]++;break;
            case T:
            case t: goal[19]++;break;
            case U:
            case u: goal[20]++;break;
            case V:
            case v: goal[21]++;break;
            case W:
            case w: goal[22]++;break;
            case X:
            case x: goal[23]++;break;
            case Y:
            case y: goal[24]++;break;
            case Z:
            case z: goal[25]++;break;
            default:size_02--;break;
        }
        
    }
    new_length=size_02;
}
void Alphabet::sort(){
    for(int i=0;i<NumAB;i++){
        stat_info[i].pre=(double)goal[i]/new_length;
        //  divided by length to get the other percentage.
        stat_info[i].index=i;
    }
    arr_index temp;
    for(int i=0;i<NumAB;i++){
        for(int j=0;j<NumAB-1-i;j++){
            if(stat_info[j].pre<stat_info[j+1].pre){
                temp=stat_info[j];
                stat_info[j]=stat_info[j+1];
                stat_info[j+1]=temp;
            }
        }
    }
}


void Alphabet::output_to_screen(){
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(1);
    for(int i=0;i<NumAB;i++){
        cout<<(char)(stat_info[i].index+97)<<": "<<stat_info[i].pre*100<<"%"<<endl;
    }
}

void Alphabet::from_input_file_output_to_file(){
    ofstream file_out;
    file_out.open(output_file_location.c_str(),ios::app);
    if(file_out.fail()){
        cout<<"fail to open "<<output_file_location<<" (save)"<<endl;
        exit(1);
    }
    file_out<<endl<<input_file_location<<endl;
    for(int i=0;i<NumAB;i++){
        file_out<<(char)(stat_info[i].index+97)<<": "<<stat_info[i].pre<<endl;
    }
    file_out.close();
}


void Alphabet::from_keyboard_output_to_file(){
    ofstream file_out;
    file_out.open(output_file_location.c_str(),ios::app);
    if(file_out.fail()){
        cout<<"fail to open "<<output_file_location<<" (save)"<<endl;
        exit(1);
    }
    file_out<<endl<<"\""<<input_keyboard<<"\""<<endl;
    for(int i=0;i<NumAB;i++){
        file_out<<(char)(stat_info[i].index+97)<<": "<<stat_info[i].pre<<endl;
    }
    file_out.close();
}
