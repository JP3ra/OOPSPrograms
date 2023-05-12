#include<iostream>
using namespace std;

class A;

class B{
    int value2;
    public:

    void getData(){
        cout<<"Enter the second value: "<<" ";
        cin>>value2;
    }

    void display(){
        cout<<"The second value is: "<<" "<<value2<<endl;
    }

    friend void swap(A &a, B &b);
};

class A{
    int value1;

    public:

    void getData(){
        cout<<"Enter the first value: "<<" ";
        cin>>value1;
    }
    void display(){
        cout<<"The first value is: "<<" "<<value1<<endl;
    }

    friend void swap(A &a, B &b);
};

void swap(A &a, B &b){
    int temp = a.value1;
    a.value1 = b.value2;
    b.value2 = temp;
}


int main()
{

    A a;
    B b;
    a.getData();
    b.getData();

    a.display();
    b.display();

    swap(a, b);

    a.display();
    b.display();


    return 0;
}