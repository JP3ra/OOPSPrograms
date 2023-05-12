#include<iostream>
using namespace std;

template<typename T, int size>

class Arrays{
    T a[size];

    public:

    void getData(){
        for(int i = 0; i<size; i++){
            cin>>a[i];
        }
    }

    void printData(){
        for(int i = 0; i<size; i++){
            cout<<a[i]<<" ";

        }
        cout<<endl;
    }
};

int main(){
    Arrays <int, 5> A;
    A.getData();
    A.printData();
}