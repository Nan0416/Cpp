#include <iostream>
#include <vector>
//must include <vector>
using namespace std;
int main(){
    //the vector's length can change when programm running
    //the other properties of vector are similar to array
   
    vector<double> v_double;
    /*
     
        Nov 15, 2015
        actually, it is using the template class
        [] is overloading operator
     
     */
    vector<string> v_string(10);//that means the vector can take class as the variable type
    //initialize
    //vector cannot be initialized with index, must with the pushback function
    v_double.push_back(0.0);
    v_double.push_back(12.23);
    for(int i=0;i<v_double.size();i++){
        //size() get the number of the elements
        cout<<v_double[i]<<endl;
        //you can retrive the element with index
    }
    vector<int> v_int(10);
    cout<<"size of v_int = "<<v_int.size()<<endl;
    cout<<"capacity of v_int = "<<v_int.capacity()<<endl;
    v_int.reserve(v_int.size()+10);
    //when the v_int increase elements, the rate will faster than unreserved
    //
    cout<<"after reserve, capacity of v_int = "<<v_int.capacity()<<endl;
    
    
    //with the a number 10, it will initialize 10 elements to 0
    //and you can change its first 10 values with index directly
    for (int i=0;i<v_int.size();i++){
        v_int[i]=i*i;
    }
    for(int i=0;i<v_int.size();i++){
        cout<<v_int[i]<<endl;
    }
    cout<<"size of "<<sizeof(v_int)<<endl;
    //vector's index is continuous, and it can be added when programm running
    v_int.resize(5);
    for(int i=0;i<v_int.size();i++){
        cout<<v_int[i]<<endl;
    }
    cout<<"size of "<<sizeof(v_int)<<endl;
    return 0;
    

}