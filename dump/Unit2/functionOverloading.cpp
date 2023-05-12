#include<iostream>
using namespace std;

//function 1
int add(int a, int b){
    cout<<"Function 1:";
    return (a+b);
}

//function 2
int add(int a, int b, int c){
    cout<<"Function 2:";
    return (a+b+c);
}

//function 3

double add(double a, double b){
    cout<<"Function 3:";
    return(a+b);
}

//fucntion 4
double add(int a, double b){
    cout<<"Function 4:";
    return(a+b);
}


int main()
{
    //1
    cout<< add(1,2)<<endl;
    cout<< add(1,2,3) <<endl;
    cout<< add(1.5112,3.512121) <<endl;
    cout<< add(1,3.5121) <<endl;
 return 0;
}
