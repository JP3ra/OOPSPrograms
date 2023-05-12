#include<iostream>
using namespace std;


class Product{
    private:
    int number;
    float price;
    public:
    void getData();

    void printData(){
        cout<<"Number is: "<<number<<endl;
        cout<<"Price is: "<<price<<endl;
    }
};

void Product::getData(){
    cin>>number;
    cin>>price;
}

int main()
{
    Product p1;
    p1.getData();
    p1.printData();
}