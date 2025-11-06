#include <iostream>
#include <cstring> // strcpy, strcmp //all of these functions to use with array string, not the original string
using namespace std;
int main(){
    string h;
    //h is a pointer for array hh
    h="hello";
    char hh[10];
    char re[10];
    //cout<<hh.length()<<endl;
    /*
     
     the difference between hh and h is the hh is initial address of this array, however h is to point it.
     
     */
    string t;
    //hh="hello";   illegal  precisely, it is called assignment
    //because hh literally is an array, and you can't use assignment to an array
    // there is some function to do that/
    strcpy(hh,"hello");
    // hh must be declared as an char array
    strcpy(hh,hh);
    //
    //strcpy(hh,h);
    strncpy(re,hh,3);
    // at most 3
    cout<<hh<<" "<<re<<endl;
    h[4]='p';
    cout<<h<<endl;
    for (int i=0;h[i]!='\0';i++){
        h[i]='r';
    }
    int a[]={1,2,3};
    cout<<a<<endl;// but for int or other type array is a pointer
    cout<<h[0]<<endl;
    cout<<h[4]<<endl;
    cout<<h<<endl;
    char tt[9]="abk";
    cout<<tt<<endl;
    char yy[4]="abg";
    cout<<"======"<<endl;
    cout<<h<<endl;
    h=hh; //h is a pointer for array hh
    cout<<h<<endl;
    cout<<"hh"<<hh<<endl;
    string rr="1b";
    string ff="1b";
    if(strcmp(h.c_str(),yy)){
        //must change string to a string
        cout<<"-----"<<endl;
        cout<<h<<endl;
        cout<<h.c_str()<<endl;
        // mechanism ====  to compare the numeric encoding from beginning, if at any poinr
        // the tt's encoding is greating than yy's return {the difference between two coding} (positive number) vice versa.
        // and when meeting '\0' stoping
        cout<<"equal"<<endl;
        cout<<strcmp(tt,yy)<<endl;
    }else{
        cout<<"not equal"<<endl;
        cout<<strcmp(hh,yy)<<endl;
    }
    //return 0;
    char string_array[]={'a','b','c'};    // called initialization
    cout<<sizeof(string_array)<<endl; //3
    char string_string[]="abc";
    cout<<sizeof(string_string)<<endl; //4
    return 0;
    
}