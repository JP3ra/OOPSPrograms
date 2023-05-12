#include<iostream>
using namespace std;


class Myclass{
    private:
    int x;
    public:
    static int count;
    
    void getData(int a){
        x =a;
        count++;
    }
    
    void showData(){
        cout<<count<<endl;
    }
};

int Myclass::count;

int main(){
    Myclass c1;
    Myclass c2;
    c1.getData(10);
    c2.getData(20);
    
    c1.showData();
    c2.showData();
}