// // Develop  a class called Employee that has emp_code and emp_name as data members. 
// Member function get_data() to accept the data and member function display () 
// to display the employee details. Write a main() function to create EMP, an array of employee objects. 
// Accept and display the details for n employees. 

#include<iostream>
using namespace std;

class Employee{

    int emp_code;
    char emp_name[20];

    public:

    void get_data(){
        cout<<"Enter the employee code"<<endl;
        cin>>emp_code; 

        cout<<"Enter the employee name"<<endl;
        cin>>emp_name;
    }

    void display(){
        cout<<"The employee code is: "<<emp_code<<endl;
        cout<<"The employee name is: "<<emp_name<<endl;
    }
};

int main(){

    int n;
    cout<<"Enter the number of employee: "<<" ";
    cin>>n;

    Employee e[n];

    for(int i = 0; i<n; i++){
        e[i].get_data();
    }
    for(int i = 0; i<n; i++){
        e[i].display();
    }
    
}