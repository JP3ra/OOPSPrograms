// Write a C++ program to calculate the percentage of a student using
// multi-level inheritance. Accept the marks of three subjects in base
// class. A class will derived from the above mentioned class which
// includes a function to find the total marks obtained and another class
// derived from this class which calculates and displays the percentage of
// student.

#include<iostream>
using namespace std;

class marks{
    int m1, m2, m3;

    public:

    void getMarks1(){
        cin>>m1;
    }

    void getMarks2(){
        cin>>m2;
    }

    void getMarks3(){
        cin>>m3;
    }

    // Sending the marks 
    int putMarks1(){
        return m1;
    }
    int putMarks2(){
        return m2;
    }
    int putMarks3(){
        return m3;
    }


    
};

class totalMarks:public marks{
    int total;

    public:

    int getTotal(){
        total = putMarks1() + putMarks2() + putMarks3();
        return total;
    }

};

class percentage:public totalMarks{
    float percentage;

    public:

    void getPercentage(){
        percentage = (getTotal()*100)/300;
    }

    void putPercentage(){
        cout<<"Final percentage is: "<<percentage<<endl;
    }
};

int main(){

    percentage p;

    p.getMarks1();
    p.getMarks2();
    p.getMarks3();

    p.getTotal();

    p.getPercentage();
    p.putPercentage();

}