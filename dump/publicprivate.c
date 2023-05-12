#include<iostream>
using namespace std;

class Room{
    private:
    double length;
    double height;
    double breadth;
    
    public:
    
    void getData(double l, double h, double b){
        length = l;
        height = h;
        breadth = b;
    }
    double calculateArea(){
        return length*breadth;
    }
    double calculateVolume(){
        return length*breadth*height;
    }
};

int main(){
    Room room1;
    room1.getData(12.5,12.5,12.5);
    
    
    cout<<"The area of the room is"<<room1.calculateArea()<<endl;
    cout<<"The volume of the room isL:"<<room1.calculateVolume()<<endl;
}