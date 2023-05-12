#include<iostream>
using namespace std;

int main(){
    int *ptr, a;
    a = 10;
    ptr = &a;

    cout<<"The value store is "<<a<<endl;
    cout<<"The value store is "<<*ptr<<endl;
    cout<<"Addrress is: "<<ptr<<endl;
}