#include<iostream>
using namespace std;

class Weight{
    private:
    int kg;
    public:
    Weight(){
        kg = 0;
    }
    Weight(int x){
        kg = x;
    }
    void printWeight(){
        cout<<kg<<endl;
    }

    // Pre increment
    void operator ++(){
        ++kg;
    }

    // Post increment
    void operator ++(int){
        kg++;
    }

    // Pre decrement 

    void operator --(){
        --kg;
    }

    // Post decrement
    void operator --(int){
        kg--;
    }
};
int main()
{
    Weight obj1;
    cout<<"Before overloading"<<" ";
    obj1.printWeight();

    cout<<"After post increment overloading"<<" ";
    ++obj1;
    obj1.printWeight();

    cout<<"After pre increment overloading"<<" ";
    obj1++;
    obj1.printWeight();

    cout<<"After pre decrement overloading"<<" ";
    --obj1;
    obj1.printWeight();

    cout<<"After post decrement overloading"<<" ";
    obj1--;
    obj1.printWeight();


 return 0;
}