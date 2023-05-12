// Develop a class called Employee that has emp_code and emp_name as data members.
// Member function get_data() to accept the data and member function display () to display
// the employee details. Write a main() function to create EMP, an array of employee
// objects. Accept and display the details for n employees.

#include<iostream>
using namespace std;

class Employee{
    private:
    int emp_code;
    char emp_name[200];

    public:
    void getData();
    void printData();
};

void Employee::getData(){
    cout<<"Enter employee code"<<" ";
    cin>>emp_code;

    cout<<"Enter the employee name"<<" ";
    cin>>emp_name;

}

void Employee::printData(){
    cout<<"The employee code is: "<<emp_code<<endl;
    cout<<"The employee name is: "<<emp_name<<endl;
}


int main()
{

    int n;
    cout<<"Enter the numbe of employees: "<<" ";
    cin>>n;

    Employee e[n];

    cout<<"Enter the employee details: "<<endl;
    for(int i = 0; i<n; i++){
        e[i].getData();
    }

    cout<<"Print the employee details: "<<endl;
    for(int i = 0; i<n; i++){
        e[i].printData();
    }


    return 0;
}
