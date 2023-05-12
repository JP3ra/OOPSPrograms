#include<iostream>
using namespace std;

class person{

    private:
    int age;
    public:

    void getAge(){
        cin>>age;
    }

    void printAge(){
        cout<<age<<endl;
    }
};

class student:public person{
    private:
    char schoolName[20];
    
    public:

    void getSchool(){
        cin>>schoolName;
    }

    void printSchool(){
        cout<<schoolName<<endl;
    }
};
int main(){

    student s;
    s.getAge();
    s.getSchool();

    s.printAge();
    s.printSchool();
}