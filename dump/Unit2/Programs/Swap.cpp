#include<iostream>
using namespace std;

class A;

class B{
    private:
    int y;

    public:
    void setValue(int i){
        y = i;
    }

    friend int(A &a, B &b);
};

class A{
    private:
    int x;

    public:

    void setValue(int i){
        x = i;
    }

    friend int(A &a, B &b);

}

void swap(A &a, B &b){
    int *temp = *a.x;
    *a.x = *b.x;
    *b.x = *temp;
}
int main()
{
 return 0;
}