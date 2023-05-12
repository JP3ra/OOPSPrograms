// Develop a C++ program to define three
//  overloaded functions to swap two integers, swap two floats and swap two doubles.

#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}