#include<iostream>
using namespace std;
class lamborghini;

class rolls_royce{
    private:
    string model_name;
    int year;
    float price;
    float mileage;
    public:
    void getData();
    void printData();
    friend void compare(rolls_royce r, lamborghini l);
};

void rolls_royce::getData(){
    cout<<"Enter model number: "<<" ";
    cin>>model_name;
    
    cout<<"Enter the year: "<<" ";
    cin>>year;
    
    cout<<"Enter the mileage"<<" ";
    cin>>mileage;
    
    cout<<"Enter the price: "<<" ";
    cin>>price;
}

void rolls_royce::printData(){
    cout<<"The model number is: "<<model_name;
    cout<<"The year of manfacture is: "<<year;
    cout<<"Mileage is: "<<mileage;
    cout<<"Price is: "<<price;
}

class lamborghini{
  private:
  string model_name;
  int year;
  float price;
  float mileage;
  
  public:
  void getData();
  void printData();
  friend void compare(rolls_royce r, lamborghini l);
  
};

void lamborghini::getData(){
    cout<<"Enter model number: "<<" ";
    cin>>model_name;
    
    cout<<"Enter the year: "<<" ";
    cin>>year;
    
    cout<<"Enter the mileage"<<" ";
    cin>>mileage;
    
    cout<<"Enter the price: "<<" ";
    cin>>price;
}

void lamborghini::printData(){
    cout<<"The model number is: "<<model_name;
    cout<<"The year of manfacture is: "<<year;
    cout<<"Mileage is: "<<mileage;
    cout<<"Price is: "<<price;
}


void compare(rolls_royce r, lamborghini l){

    
    if(r.price>l.price){
        cout<<"The price of rolls_royce is greater"<<endl;
    }
    else{
        cout<<"The price of mileage is higher"<<endl;
    }
    
    if(r.mileage>l.mileage){
        cout<<"The mileage of rolls royce is bettter"<<endl;
        
    }
    else{
        cout<<"The mileage of lamborghini is better"<<endl;
    }
}

int main(){
    lamborghini l1;
    l1.getData();
    
    rolls_royce r1;
    r1.getData();
    
    l1.printData();
    r1.printData();
    
    compare(r1,l1);
    
}