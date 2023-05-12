#include<iostream>
using namespace std;

template<typename T>

bool linearSearch(T a[], int size, T key){

    if(size == 0){
        return 0;
    }
    else{
        for(int i = 0; i<size; i++){
            if(a[i]==key){
                return 1;
            }
        }
    }

    return 0;
}

int main(){
    int arr[5] = {1,2,3,5,6};
    int key = 5;
    bool res = linearSearch(arr, 5, key);
    if(res){
        cout<<"The element exists"<<endl;
    }
    else{
        cout<<"The element doesnt exist"<<endl;
    }
}