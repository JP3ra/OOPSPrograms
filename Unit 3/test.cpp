#include<iostream>
using namespace std;

class B1{
    int b1;
    public:
    void display(){
        cout<<b1<<endl;
    }
};

class B2{
    int b2;
    public:
    void display(){
        cout<<b2<<endl;
    }
};

class D: public B1, public B2{

};

int main(){
    D d;
    d.display();
    d.B1::display();
    d.B2::display();
}