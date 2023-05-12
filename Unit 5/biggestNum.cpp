// Design a C++ program to find the
// biggest of three numbers using template functions.

#include<iostream>
using namespace std;

template<typename T>

T largest(T a, T b, T c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){

    int min = largest<int>(2,3,4);
    cout<<min<<endl;

}