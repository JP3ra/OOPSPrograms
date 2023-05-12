#include<iostream>
using namespace std;

class employee{
    private:
    int emp_no;
    string emp_name;
    float basic;
    float daily_all;
    float net_sal;
    
    public:
    
    void getData();
    void printData();
    float setDA();
    float setNet_sal();
};

void employee::getData(){
    cout<<"Enter the employee number: "<<" ";
    cin>>emp_no;
    
    cout<<"Enter the employee name: "<<" ";
    cin>>emp_name;
    
    cout<<"Enter the basic salary: "<<" ";
    cin>>basic;
}

float employee::setDA(){
    daily_all = basic*0.52;
    return daily_all;
    
}

float employee::setNet_sal(){
    net_sal = basic+daily_all;
    return net_sal;
}

void employee::printData(){
    cout<<"The employee number is: "<<emp_no;
    cout<<"The employee name is: "<<emp_name<<endl;
    cout<<"The basic salary is: "<<basic<<endl;;
    cout<<"The dailt allowance is: "<<setDA()<<endl;
    cout<<"The net salary is "<<setNet_sal()<<endl;
    
}

int main(){
    employee e[2];
    for(int i=0;i<2;i++){
        e[i].getData();
    }
    
    for(int i=0;i<2;i++){
        e[i].printData();
    }
}
