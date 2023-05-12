#include<iostream>
using namespace std;

class marks{
    int Marks[3];

    public:

    marks(){
        Marks[0] = 10;
        Marks[1] = 40;
        Marks[2] = 30;
    }

    int operator [](int position){
        return Marks[position];
    }

};

int main(){
    marks manju;

    cout<<manju[0]<<"";
    cout<<manju[1]<<"";
    cout<<manju[2]<<"";
}