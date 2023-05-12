#include<iostream>
using namespace std;

class Room{
    public:
    double length;
    double height;
    double breadth;
    
    double calculateArea(){
        return length*breadth;
    }
    double calculateVolume(){
        return length*breadth*height;
    }
};

int main(){
    Room room1;
    room1.length = 12.5;
    room1.breadth = 15;
    room1.height = 17;
    
    
    cout<<"The area of the room is"<<room1.calculateArea()<<endl;
    cout<<"The volume of the room isL:"<<room1.calculateVolume()<<endl;
}