#include<iostream>
using namespace std;

//base class derivation

class Student{
    private:
    int roll_no;
    public:
    void getRoll(int r);
    void putRoll();
};

void Student::getRoll(int r){
    roll_no =r;
}

void Student::putRoll(){
    cout<<"The roll no is:"<<roll_no<<endl;
}


//first derived class

class test:public Student{
    protected:
    float marks1;
    float marks2;
    public:
    void GetMarks(float m1, float m2);
    void PutMarks();
};

void test::GetMarks(float m1, float m2){
    marks1 = m1;
    marks2 = m2;
    
}

void test::PutMarks(){
    cout<<"Marks in Test1:"<<marks1<<endl;
    cout<<"Marks in Test2:"<<marks2<<endl;
}

//second deruved class

class result:public test{
    protected:
    float total;
    
    public:
    void Gettotal();
};

void result::Gettotal(){
    total = marks1 + marks2;
    putRoll();
    PutMarks();
    cout<<"The total marks is:"<<total<<endl;
}


int main(){
    result s1;
    s1.getRoll(100);
    s1.GetMarks(110.5,120.5);
    
    s1.Gettotal();
}
