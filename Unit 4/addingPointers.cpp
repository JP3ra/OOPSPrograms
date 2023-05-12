#include<iostream>
using namespace std;

int main(){
    int *ptr1, *ptr2, a, b;
    cin>>a;
    cin>>b;

    ptr1 = &a;
    ptr2 = &b;

    int sum =  (*ptr1)+(*ptr2);
    cout<<sum<<endl;
}