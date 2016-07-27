// move constructor/assignment
#include <iostream>
#include <string>
using namespace std;

class Example6 {
    string* ptr;
public:
    Example6(){}
    Example6 (const string& str) : ptr(new string(str)) {
        cout<<"defined constructor"<<endl;}
    ~Example6 () {delete ptr;}
    // move constructor
    Example6 (Example6&& x) : ptr(x.ptr) {
        cout<<"move constructor"<<endl;
        x.ptr=nullptr;
    }
    // move assignment
    Example6& operator= (Example6&& x) {
        cout<<"move assignment "<<endl;
        delete ptr;
        ptr = x.ptr;
        x.ptr=nullptr;
        return *this;
    }
    // access content:
    const string& content() const {return *ptr;}
    // addition:
    Example6 operator+(const Example6& rhs) {
        return Example6(content()+rhs.content());
    }
};


int main () {
    Example6 foo ("Exam");
    Example6 bar = Example6("ple");   // move-construction
    Example6 er;
    foo = foo + bar; // move-assignment
    er=Example6("eee");
    
    cout << "foo's content: " << foo.content() << '\n';
    return 0;
}
Example6::Example6 (const string& str){
    ptr= new string(str);
    cout<<"defined constructor"<<endl;

}
~Example6 () {delete ptr;}
// move constructor
Example6 (Example6&& x) : ptr(x.ptr) {
    cout<<"move constructor"<<endl;
    x.ptr=nullptr;
}
// move assignment
Example6& operator= (Example6&& x) {
    cout<<"move assignment "<<endl;
    delete ptr;
    ptr = x.ptr;
    x.ptr=nullptr;
    return *this;
}
// access content:
const string& content() const {return *ptr;}
// addition:
Example6 operator+(const Example6& rhs) {
    return Example6(content()+rhs.content());
}
