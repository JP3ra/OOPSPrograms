#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &vector1){
    int size = vector1.size();
    for(int i = 0; i<size; i++){
        cout<<vector1[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> v;
    int num;

    // Inserting 5 elements, each at the end of the vector

    for(int i = 0; i<5; i++){
        cin>>num;
        v.push_back(num);
    }
    print(v);

    // Getting the size of the vector

    cout<<"Size of the vector: "<<v.size()<<endl;
    cout<<"The capacity of the vector is: "<<v.capacity()<<endl;

    // Getting a pointer at the first element 
    vector<int> :: iterator itr = v.begin();

    // Inserting element at some position 
    v.insert(itr+2, 8);
    print(v);

    // Getting a pointer at the end of the element
    vector<int>::iterator itr1 = v.end();

    // Deleting at some position
    v.erase(itr1-2);
    print(v);

    sort(v);
    print(v);



}