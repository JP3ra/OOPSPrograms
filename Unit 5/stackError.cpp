// Write a C++ program to create a class stack to throw separate exceptions on
// an attempt to push into a full stack and pop out from an empty stack.

#include<iostream>
using namespace std;

class Stack{
    int stack[3];
    int top = -1;
    public:

    void push(int i){
        top = top+1;
        try
        {
            if(top>=3){
                throw 3;
            }
            stack[top] = i;
            cout<<stack[top]<<" ";
            cout<<"Added element"<<endl;
        }
        catch(...){
            cout<<"The stack is full"<<endl;
        }
    }

    void pop(){

        try
        {
            if(top==-1){
                throw 0;
            }

            cout<<stack[top]<<" ";
            top = top - 1;
        }
        catch(...){
            cout<<"The stack is empty"<<endl;
        }
        
    }
};

int main(){
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.pop();
    s1.pop();
    s1.pop();

}