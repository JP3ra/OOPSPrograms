// Write a C++ program to add two numbers using single inheritance.
// Accept these two numbers from the user in base class and display the
// sum of these two numbers in derived class.

#include<iostream>
using namespace std;

class A{
    int a;
    int b;

    public:
    
    void getA(){
        cin>>a;
    }
    void getB(){
        cin>>b;
    }

    int displayA(){
        return a;
    }

    int displayB(){
        return b;
    }
};


class B:public A{
    int sum;

    public:

    void add(){
        sum = displayA() + displayB();
    }

    void displaySum(){
        cout<<"Sum is "<<sum<<endl;
    }
};

int main(){

    B case1;

    case1.getA();
    case1.getB();

    case1.add();
    case1.displaySum();
}