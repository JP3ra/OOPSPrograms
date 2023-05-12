// Write class declarations and member function definitions for a C++ base class
// to represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime
// (number of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.
// 3. Search a given Employee by emp-code.

#include<iostream>
using namespace std;

class Employee{
    int empCode;
    char name[20];

    public:

    void getCode(){
        cin>>empCode;
    }

    void getName(){
        cin>>name;
    }
};

class fullTime:public Employee{

    int dailyRate;
    int noDays;
    float salary;

    public:

    void getRate(){
        cin>>dailyRate;
    }
    void getDays(){
        cin>>noDays;
    }

    void getSalary(){
        cin>>salary;
    }
};

class partTime:public Employee{

    int workingHours;
    float hourlyRate;
    float salary;

    public:

    void getHours(){
        cin>>workingHours;
    }

    void getHourly(){
        cin>>hourlyRate;
    }


    void getSalary(){
        cin>>salary;
    }

};

int main(){

    int n;
    cin>>n;
    int arr[n];
    in ch;

    for(int i = 0; i<n; i++){
        cout<<"Enter 1. part time or 2. full time "<<endl;
        cin>>ch;

        if(ch==1){
            
        }
    }
}