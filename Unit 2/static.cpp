// Write a program to design a class with static member function named  
// show_count () which has the property of displaying the number of objects created by the class.

#include<iostream>
using namespace std;

class Test{
    int data;
    static int count;

    public:

    void setData(){
        count++;
        cin>>data;
    }

    static void show_count(){
        cout<<"The number of objects created: "<<count<<endl;
    }
};

int Test::count = 0;


int main(){
    Test t1, t2, t3;
    t1.setData();
    t2.setData();
    t3.setData();

Test::show_count();
}