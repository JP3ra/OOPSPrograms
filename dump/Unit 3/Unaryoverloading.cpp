#include<iostream>
using namespace std;

class Weight{
    private:
    int kg;
    public:
    Weight(){
        kg = 0;
    }
    Weight(int x){
        kg = x;
    }
    void PrintWeight(){
        cout<<"The weight is"<<" "<<kg;
    }
    
    void operator ++(){
        ++kg;
    }
    
    //the int is to differentiate 
    void operator ++(int){
        kg++;
    }
    
    void operator --(){
        --kg;
    }
    void operator --(int){
        kg--;
    }
};



int main(){
    
    Weight w1(9);
    ++w1;
    w1.PrintWeight();
    w1--;
    w1.PrintWeight();
    
    
}