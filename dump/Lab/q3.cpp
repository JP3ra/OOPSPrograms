#include<iostream>
using namespace std;

class complex{
  private:
  int real;
  int img;
  public:
  void getData(){
      cout<<"Enter the real part :"<<" ";
      cin>>real;
      
      cout<<"Enter the imaginary part: "<<" ";
      cin>>img;

      cout<<"Enter the imaginary part: "<<" ";
      cin>>img;
  }

  void printData(){
        
  }
  
  void add(complex c1, complex c2){
      int r1 = c1.real + c2.real;
      int i1 = c1.img + c2.img;
      cout<<r1<<"+"<<i1<<endl;
  }

  void add(complex c1, complex c2){
    int r1 = c1.real + c2.real;
    int i1 
  }
  void add(int a, complex c1){
      int r1 = a+ c1.real;
      int i1 = c1.img;
      cout<<r1<<"+"<<i1<<"i"<<endl;
  }
};

int main(){
    complex c1;
    complex c2;
    cout<<"Case 1"<<endl;
    c1.getData();
    c2.getData();
    complex c3;
    c3.add(c1,c2);
    
    cout<<"Case 2"<<endl;
    int a;
    cin>>a;
    c3.add(a,c2);
}