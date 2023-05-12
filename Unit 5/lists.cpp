#include<iostream>
#include<list>

using namespace std;

void print(list<int>&l1){
    list<int>::iterator itr;

    for(itr = l1.begin(); itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }

    cout<<endl;
}

int main(){
    list<int> l1;
    list<int> l2;

    int num = 0;

    for(int i = 0; i< 3;i++){
        cin>>num;
        l1.push_back(num);
    }

    for(int i = 0; i< 3;i++){
        cin>>num;
        l2.push_back(num);
    }

    print(l1);
    print(l2);

    list<int>::iterator itr = l2.begin();
    // l1.erase(itr);

    // print(l1);

    l1.resize(5);
    l1.push_back(*itr);
    l1.push_back(*(itr++));
    // l1.push_back(l2[itr+1]);
    // l1.push_back(l2[itr+2]);

    print(l1);
}