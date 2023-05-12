#include<iostream>
using namespace std;

class Marks{
    private:
    int subjects[3];
    public:
    Marks(int sub1, int sub2, int sub3){
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
    }
    
    int operator [](int pos){
        return subjects[pos];
    }
};

int main(){
    Marks anil(10,20,30);
    
    cout<<anil[0]<<" ";
    cout<<anil[1]<<" ";
    cout<<anil[2]<<" ";
}