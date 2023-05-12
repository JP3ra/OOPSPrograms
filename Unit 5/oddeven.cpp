#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    try
    {
        if(n<0){
            throw 1;
        }
        cout<<"It is a positive number"<<endl;
    }
    catch(...){
        cout<<"Please dont enter a negative number"<<endl;
    }
}