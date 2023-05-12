#include<iostream>
using namespace std;

class Complex{

    int real;
    int img;

    public:

    Complex(){
        real = 5;
        img = 5;
    }

    // Operator Overloaded addition
    // Complex operator +(Complex c){
    //     Complex temp;
    //     temp.real = real + c.real;
    //     temp.img = img + c.img;
    //     return temp;
    // }

    // Operator Overloaded Subtraction

    Complex operator -(Complex c){
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }

    friend Complex operator +(Complex c1, Complex c2);

    
    void getData(){
        cin>>real;
        cin>>img;
    }

    void printData(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

Complex operator +(Complex c1, Complex c2){
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
}


int main(){
    Complex c1, c2;

    Complex c3 = c1 + c2;
    c3.printData();

    Complex c4;
    c4.getData();
    Complex c5, c6;

    c6 = c4-c5;
    c6.printData();
}