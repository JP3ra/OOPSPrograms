#include<iostream>
using namespace std;

class Matrix{

    int a[10][10], int m, int n;

    public:

    void getData(){
        cout<<"Enter the order of the matrix: "<<" ";
        cin>>m>>n;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                cin>>a[i][j];
            }
        }

    }

    void printData(){
        cout<<"The matrix is as follows: "<<endl;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    int operator [](int position1, int position2){
        return a[position1][position2];
    }

    Matrix operator +(Matrix x){

        Matrix temp;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<x.n; j++){
                temp[i][j] = a[i][j] + x.a[i][j];
            }
        }

        return temp;
    }
    
    Matrix operator -(Matrix m);
    Matrix operator *(Matrix m);
};


int main(){
    Matrix m1;
    m1.getData();
    Matrix m2;
    m2.getData();
    
    Matrix m3 = m1 + m2;
    m3.printData();
}