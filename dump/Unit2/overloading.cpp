#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}



int main(){
    cout<<"Function1"<<add(2,5)<<endl;
   
    cout<<"Function3"<<add(2,3,4)<<endl;
    
}