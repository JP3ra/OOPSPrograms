#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;
    
    public:
    Complex(){
        real = 0;
        img = 0;
        
    }
    
    Complex(int r, int i){
        real = r;
        img = i;
    }
    
    void complexPrint(){
        cout<<real<<" "<<"+i"<<img<<endl;
    }
    
    Complex operator +(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main(){
    Complex c1(3,4);
    Complex c2(4,5);
    Complex c3;
    c3 = c1+c2;
    c3.complexPrint();
    
}