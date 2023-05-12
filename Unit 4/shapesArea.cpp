#include<iostream>
using namespace std;

class Shape{
    int side;

    public:

    virtual int calculateArea(){
        return side*side;
    }
};

class Circle:public Shape{
    int radius;

    public:

    void getRadius(){
        cin>>radius;
    }

    int calculateArea(){
        return (3.14*radius*radius);
    }
};

int main(){
    Shape *s;

    Circle c1;
    c1.getRadius();
    s = &c1;
    cout<<"Area of the circle is:"<<s->calculateArea()<<endl;
    
}