// Define Template. Write a C++ program to find the minimum of elements using function templates.

#include<iostream>
using namespace std;

template<typename T>

T minimum(T a[], int size){

    T min = a[0];

    for(int i = 1; i<size; i++){
        if(a[i]<min){
            min = a[i];
        }
    }

    return min;
}
int main(){

    int a[5] = {10,92,12,1,5};
    int min1 =  minimum(a, 5);

    float b[2] = {1.2, 5.6};
    float mini2 = minimum(b, 2);
    cout<<mini2<<endl;
    cout<<min1<<endl;
}