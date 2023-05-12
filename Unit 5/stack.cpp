#include<iostream>
using namespace std;

template<class T, int size>

class Stack{
    T stack[size];

    public:

    void getData(){
        for(int i = 0; i<size; i++){
            cin>>stack[i];
        }
    }
    void printStack(){
        for(int i = 0; i<size; i++){
            cout<<stack[i]<<endl;
        }
    }
};

int main(){

    Stack <int, 5> stack1;
    stack1.getData();
    stack1.printStack();

    Stack <float, 5> stack2;
    stack2.getData();
    stack2.printStack();
}