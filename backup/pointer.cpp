#include <iostream>
using namespace std;

int main(){

    //double **p;
    //double arr[5][5];
    double*****p;
    p=new double**** [5];
    for(int i=0;i<5;i++){
        p[i]=new double*** [5];
        for(int j=0;j<5;j++){
            p[i][j]=new double** [5];
            for(int k=0;k<5;k++){
                p[i][j][k]=new double * [5];
                for(int l=0;l<5;l++){
                    p[i][j][k][l]=new double [5];
                }
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                for(int l=0;l<5;l++){
                    for(int r=0;r<5;r++){
                    
                        p[i][j][k][l][r]=i*j*k*l*r;
                    }
                }
            }
        }
    }
    cout<<p[3][2][1][3][4]<<endl;

    
    
    return 0;
}