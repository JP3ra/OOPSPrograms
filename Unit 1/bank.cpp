// Define a class to represent a bank account. Include the following members:
// Data members :
// a) Name of the depositor
// b) Account Number
// c) Type of account
// d)Balance amount in the account
// Member Functions:
// a) To Assign initial values
// b) To deposit an amount
// c) To withdraw an amount after checking the Balance
// d) To display name and balance
// Write a main program to test the program

#include<iostream>
using namespace std;

class Bank{
    char name[20];
    int accNum;
    char typeAcc[20];
    float balance;

    public:

    void setData(){
        cin>>name;
        cin>>accNum;
        cin>>typeAcc;
        cin>>balance;
    }

    void deposit(float amount){
        cout<<"Here is your trasnsaction deposit of "<<amount<<" rupees.";
        deposit = deposit-amount
    }

    void checkDeposit(){
        cout<<"Your current balance is"<<balance
    }
}

int main(){

}