#include<iostream>
using namespace std;

class Complex{
    int x;
    int y;

    public:

    void getData(){
        cout<<"Enter the real part: "<<" ";
        cin>>x;

        cout<<"Enter the imaginary part"<<" ";
        cin>>y;
    }   

    friend Complex add(Complex c1, Complex c2);

    void printData(){
        cout<<x<<" + "<<"i"<<y<<endl;
    }

};

    Complex add(Complex c1, Complex c2){
        Complex c3;

        c3.x = c2.x + c1.x;
        c3.y = c2.y + c1.y;

        return(c3);
    }



int main(){

    Complex c1, c2, c3;

    c1.getData();
    c2.getData();

    c3 = add(c1, c2);

    c3.printData();



}