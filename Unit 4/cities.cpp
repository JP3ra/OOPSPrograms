// Create a class city with two member variables char * name and int len. The
// class should have a constructor and member methods setname () and
// display(). Write a driver function that creates array of 10 pointers and stores
// ten objects of cities.

#include<iostream>
using namespace std;

class City{
    char *name[20];
    int len;

    public:

    void getName(){
        cin>>*name;
    }

    void display(){
        cout<<name<<endl;
    }
};

int main(){

    City *c[10];

    cout<<"Entering the 10 cities"<<endl;
    for(int i = 0; i<10; i++){
        c[i]->getName();
    }

    cout<<"Displaying the 10 cities"<<endl;
    for(int i = 0; i<10; i++){
        c[i]->display();
    }

}