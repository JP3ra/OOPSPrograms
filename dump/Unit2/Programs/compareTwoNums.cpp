#include<iostream>
using namespace std;

class A;

class B{
    private:
    int b;
    public:

    void setValue(){
        b = 10;
    }

    friend int compare(A a, B b);
};

class A{
    private:
    int a;

    public:

    void setValue(){
        a = 20;
    }
    friend int compare(A a, B b);

};

int compare(A x, B y){
    if(x.a > y.b){
        return x.a;
    }
    else if(x.a < y.b){
        return y.b;
    }
    else{
        return x.a;
    }
}


int main()
{

    A x;
    x.setValue();

    B y;
    y.setValue();

    cout<<compare(x, y)<<endl;
 return 0;
}