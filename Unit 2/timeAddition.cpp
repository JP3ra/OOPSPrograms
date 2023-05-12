#include<iostream>
using namespace std;

class Time{
    int hours;
    int minutes;

    public:

    void getData(){
        cout<<"Enter the number of hours: "<<" ";
        cin>>hours;

        cout<<"Enter the number of minutes: "<<" ";
        cin>>minutes;
    }

    void putTime(){
        cout<<hours<<" hours"<<" ";
        cout<<minutes<<"minutes"<<endl;

    }

    void add(Time t1, Time t2);
};


void Time::add(Time t1, Time t2){
    minutes = t1.minutes + t2.minutes;
    hours = hours/60;
    minutes = minutes%60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{   
    Time t1(2, 45);
    Time t2(3,30);
    Time T3;

    T3.add(t1, t2);

    T3.putTime();
    
}