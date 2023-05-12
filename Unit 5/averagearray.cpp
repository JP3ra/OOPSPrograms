// Develop a function template for finding average of elements contained in
// an array

#include<iostream>
using namespace std;

template<typename T>

T findAverage(T a[], int size){
    T sum = 0;

    for(int i = 0; i<size; i++){
        sum+=a[i];
    }

    T avg = sum/size;
    return avg;
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int mean = findAverage(arr1, 5);
    cout<<"Mean of arrays 1 is: "<<mean<<endl;

    float arr2[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
    float mean1 = findAverage(arr2, 5);
    cout<<"Mean of array 2 is:"<<mean1<<endl;
}