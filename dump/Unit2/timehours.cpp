#include<iostream>
using namespace std;

class time{
    private:
    int hours;
    int minutes;
    
    public:
    void gettime(int h, int m){
        hours = h;
        minutes = m;
    }
    
    void puttime(int hours, int minutes){
        cout<<"Hours: "<<hours<<" ";
        cout<<"Minutes: "<<minutes<<" "<<endl;
    }
    
    void sumtime(time, time);
};

void time::sumtime(time t1, time t2){
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours + t1.hours + t2.hours;
}

int main(){
    time t1; 
    time t2;
    time t3;
    t1.gettime(2,45);
    t2.gettime(3,56);
    
    t3.sumtime(t1, t3);
    t3.puttime();
}