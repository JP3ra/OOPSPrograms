#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> std;
    string area;
    int code;

    for(int i = 0; i<3; i++){
        cout<<"Enter the city name"<<" ";
        cin>>area;

        cout<<"Enter the code"<<" ";
        cin>>code;

        std[area] = code;
    }

    map<string, int> ::iterator itr;

    for(itr = std.begin(); itr!=std.end(); itr++){
        cout<<(*itr).first<<(*itr).second<<endl;
    }
}