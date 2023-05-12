// Write a program using class to process shopping list for a departmental store.
// The list include details such as the code no, item name and price of each item.
// Add the member functions to add the items, delete the items, to the list and to print the
// total value of the order.

#include<iostream>
using namespace std;
int count = 0;

class Shopping{
    private:
    int codeNo;
    char itemName[200];
    float price;


    public:

    void getData(){
        cout<<"Enter the product code number: "<<" ";
        cin>>codeNo;

        cout<<"Enter the item name: "<<" ";
        cin>>itemName;

        cout<<"Enter the price"<<" ";
        cin>>price;

        count++;
    }

    void printData(){
        cout<<"The final bill is: "<<endl;

        cout<<"The product code is "<<codeNo<<endl;
        cout<<"The product name is "<<itemName<<endl;
        cout<<"The price of the product  is "<<price<<endl;

    }

    void removeItem(){
        codeNo = 0;
        itemName = "";
        product = 0;

    }


}
int main()
{

    while(ch!=3){

        cout<<"Press 1 to add item"<<endl;

        cout<<"Press 2 to delete item"<<endl;;

        cout<<"Press 3 to print final bill and get sum"<<endl;

        int ch;
        cin>>ch;

        if(ch)
    }
}
