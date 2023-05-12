#include<iostream>
using namespace std;

int main(){

    int x = -1;

    cout<<"Before the try is execuuted"<<endl;

    try
    {
        if(x<0){
            throw 'z';
        }
        x++;
        cout<<"Without exception: "<<x<<endl;
    }   
    catch(int x)
    {
        cout<<"Number cannot be negative"<<endl;
    }
    catch(...){
        cout<<"Catch all catch executed"<<endl;
    }

    cout<<"Successful execution done"<<endl;
}
