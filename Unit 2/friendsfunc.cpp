#include<iostream>
using namespace std;

class Marks{
    int a;
    int b;

    public:

    void getData(){
        cin>>a;
        cin>>b;
    }

    friend float mean(Marks m);
};

float mean(Marks m){
    float mean = (m.a+m.b)/2;
    return mean;
}
int main()
{

    Marks m;
    m.getData();

    cout<<mean(m)<<" ";

 return 0;
}