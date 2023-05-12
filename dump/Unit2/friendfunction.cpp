#include<iostream>
using namespace std;


class Sample{
    int a;
    int b;

    public:

    void setValue(){
        a = 25;
        b = 25;
    }

    friend int add(Sample S);
};

int add(Sample S){
    return (S.a + S.b);
}
int main()
{

 Sample x;
 x.setValue();

 cout<<add(x)<<endl;
}