#include<iostream>
using namespace std;

template <typename T>

class Add{
    T a;
    T b;

    public:

    Add(T a, T b){
        this->a = a;
        this->b = b;
    }

    T add(){
        T sum  =  a+b;
        return sum;
    }

};

int main(){

    Add <int>obj1(4,5);
    int res = obj1.add();
    cout<<res<<endl;
}