#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;
double determinant(double**matrix, int size);
double** resemble(double** matrix,int column,int size);
void output(double** arr,int size);
void free(double** arr,int size);
int main(){
    int n=0;
    string h="";
    string filename="";
    double result=0;
    ifstream file_in;
    do{
        n=0;
        h="";
        filename="";
        cout<<"enter filename: ";
        cin>>filename;
        file_in.open(filename.c_str());
        if(file_in.fail()){
            cout<<"fail to open "<<filename<<endl;
            
        }else{
            file_in>>n;
            if(n<1){
                cout<<"*** ERROR ***"<<endl<<"That value is invalid."<<endl;
            }else{
                double** arr=new double* [n];
                cout<<"Enter the components: ";
                for(int i=0;i<n;i++){
                    arr[i]=new double [n];
                    for(int j=0;j<n;j++){
                        file_in>>arr[i][j];
                    }
                }
                file_in.close();
                result=determinant(arr,n);
                cout<<"Determinant: "<<result<<endl;
                free(arr,n);
            }

        }
        
        cout<<"Compute another determinant (y/n)? ";
        cin>>h;
    }while(h=="y");
    
    cout<<"Thank you."<<endl<<"Goodbye."<<endl;
    return 0;

}
double determinant(double**matrix, int size){
    if(size<0){
        cout<<"*** Error *** d"<<endl;
        exit(1);
    }else if(size==1){
        
        return matrix[0][0];
    }else{
        double temp=0;
        for(int i=0;i<size;i++){
            double** hu=resemble(matrix,i,size);
            temp+=determinant(hu,size-1)*matrix[0][i]*pow(-1,i);
            free(hu,size-1);
        }
        
        return temp;
    }
}
double** resemble(double** matrix,int column,int size){
    /* column from 0 */
    /* test vaild or not*/
    if(size<2||column>size-1){
        cout<<"*** Error *** s"<<endl;
        exit(1);
    }
    double**arr=new double* [size-1];
    for(int i=0;i<size-1;i++){
        arr[i]=new double[size-1];
        for(int j=0,r=0;j<size-1;j++){
            if(j==column){
                r++;
            }
            
            arr[i][j]=matrix[i+1][r];
            r++;
        }
    }
    for(int i=0;i<size;i++){
    }
    return arr;
}


void output(double** arr,int size){
    cout<<"====="<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-------"<<endl;
}
void free(double** arr,int size){
    for(int i=0;i<size;i++){
        delete arr[i];
    }
    delete arr;

}
