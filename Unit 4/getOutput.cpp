// P points to base:
// Displaying base class....
// Showing base class....
// P points to derive:
// Displaying base class....
// Showing derived class....

#include<iostream>
using namespace std;

class Base{

    int b;

    public:

    virtual void display(){
        cout<<"Displaying the base class...."<<endl;
    }

    virtual void show(){
        cout<<"Showing base class...."<<endl;

    }
};

class Child:public Base{
    int c;
    public:

    void display(){
        cout<<"Displaying the derived class...."<<endl;
    }
    void show(){
        cout<<"Showing the derived class...."<<endl;    
    }
};

int main(){
    Base *ptr;

    Base b1;

    ptr = &b1;
    cout<<"P points to base"<<endl;
    ptr->display();
    ptr->show();

    Child c1;

    ptr = &c1;
    cout<<"P points to derived"<<endl;
    ptr->display();
    ptr->show();
}