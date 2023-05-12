// Develop a program to create a class student with usn name and marks of
// three subjects that have member variables. Write input and output methods
// to read and display values. Also write compute_total () method which
// calculates the total marks. Write user defined exception that would be
// thrown if the total marks exceeds 300.

#include<iostream>
using namespace std;

class student{

    char usn[20];
    char name[20];
    float marks[3];
    float total;
    
    public:

    void getData(){
        cout<<"Enter the usn"<<" ";
        cin>>usn;

        cout<<"Enter the name"<<" ";
        cin>>usn;

        cout<<"Enter marks in subject 1:"<<" ";
        cin>>marks[0];
        cout<<"Enter marks in subject 2:"<<" ";
        cin>>marks[1];
        cout<<"Enter marks in subject 3:"<<" ";
        cin>>marks[2];
    }

    void compute_total(){
        total = marks[0] + marks[1] + marks[2];

        try
        {
            if(total>300){
                throw 1;
            }
        }
        catch
        {
            cout<<"Incorrect marks entered"<<endl;
        }
    }

    void printData(){
        cout<<"The USN is: "<<usn<<". "<<"The name is: "<<name<<". "<<"The total marks is"<<total<<endl; 
    }
};

int main(){
    
}