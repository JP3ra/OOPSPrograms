#include<iostream>
using namespace std;


class item{
    private:
    int number;
    float cost;
    
    public:
    void getData(int a, float b);
    
    //inline declaration
    void putData(){
        cout<<"The number is"<<number<<endl;
        cout<<"The cost is"<<cost<<endl;
    }
};


//outside class deifinition
void item::getData(int a, float b){
    number = a;
    cost = b;
}


int main(){
    item Item1;
    
    Item1.getData(12, 15.5);
    Item1.putData();
}