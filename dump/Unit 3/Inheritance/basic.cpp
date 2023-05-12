#include<iostream>
using namespace std;

class Shape{
    private:
    int value;
    protected:
    int height;
    int width;
    public:
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){
        height = h;
    }
};

class Rectangle:public Shape{
    public:
    int PrintArea(){
        return height*width;
    }
};

int main(){
    Rectangle r;
    r.setHeight(10);
    r.setWidth(20);
    cout<<"The area of the rectangle is:" <<r.PrintArea()<<endl;
}