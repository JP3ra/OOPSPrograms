/**1.Given that an EMPLOYEE class contains following members: 
 * Employee Number, 
 * Employee Name, 

Basic, 
DA, 
IT, 
Net Salary. 
Member functions: to read the data, 
to calculate Net Salary and to 
print data members. 

Write a C++ program to read the data of N employees and compute Net Salary 
of each employee. (Dearness Allowance (DA) = 52% of Basic and Income Tax (IT) = 30% of the 
gross salary. Net Salary = Basic + DA - IT).**/

#include<iostream>
using namespace std;

class employee{
    private:
    int emp_num;
    char emp_name[200];
    float basic_salary;
    float da;
    float gross_salary;
    float it;
    float net_salary;
    
    public:
    void readData();
    float calcNetsalary();
    
    void printData();
};

void employee::readData(){
    cout<<"Enter the employee number: "<<" ";
    cin>>emp_num;
    
    cout<<"Enter the employee name:"<<" ";
    cin>>emp_name;
    
    cout<<"Enter the basic salary: "<<" ";
    cin>>basic_salary;
    
    
}

float employee::calcNetsalary(){
    da = 0.52*basic_salary;
    gross_salary = basic_salary + da;
    it = 0.3*gross_salary;
    
    net_salary = gross_salary - it;
    
    return net_salary;
}

void employee::printData(){
    cout<<"The employee number is:"<<" "<<emp_num;
    
    cout<<"The employee name is:"<<" "<<emp_name;
    
    cout<<"The basic salary is:"<<" "<<basic_salary;
    
    cout<<"The daily allowance is: "<<" "<<da;
    
    cout<<"The gross salary is:"<<" "<<gross_salary;
    
    cout<<"The it is:"<<" "<<it;
    
    cout<<"The net salary is"<<" "<<net_salary;
    
}

int main(){
    int n;
    cout<<"Enter the number of employee records to be stored: "<<" ";
    cin>>n;
    
    employee emp[n];
    
    for(int i=0;i<n;i++){
        emp[i].readData();
        emp[i].calcNetsalary();
    }
    
    for(int i=0;i<n;i++){
        emp[i].printData();
    }
    
    
    return 0;
}