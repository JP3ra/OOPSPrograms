// Write a C++ program to design a base class Person (name, address, phone_no).
// Derive a class Employee (eno, ename) from Person. Derive a class Manager
// (designation, department name, basic-salary) from Employee. Write a menu
// driven program to:
// a. Accept all details of &#39;n&#39; managers.
// b. Display manager having highest salary

#include<iostream>
using namespace std;
class Person{
    char name[20];
    char address[20];
    char phoneNum[10];

    public:

    void getName(){
        cin>>name;
    }

    void getAddress(){
        cin>>address;
    }

    void getPhone(){
        cin>>phoneNum;
    }
};

class employee:public Person{

    private:
    int eno;
    char ename[20];

    public:

    void getEno(){
        cin>>eno;
    }
    void getEname(){
        cin>>ename;
    }
};

class manager:public employee{

    char designation[20];
    char deptName[20];
    float salary;

    public:

    void getDesignation(){
        cin>>designation;
    }

    void getDept(){
        cin>>deptName;
    }

    void getSalary(){
        cin>>salary;
    }
};

int main(){
    int n;
    cout<<"Enter the number of managers"<<" ";
    cin>>n;

    manager m[n];

    for(int i = 0; i<n;i++){
        m[i].
    }
}