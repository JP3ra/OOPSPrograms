// // Create a distance class with feet and inches as
//  data members , member function to input distance , member function to output distance , 
// member function to add two distance objects . Develop a C++ program  for the given  specification. 

#include <iostream>
using namespace std;

class Distance {
   private:
      int feet;
      float inches;
   public:
      Distance() : feet(0), inches(0.0) {}
      Distance(int ft, float in) : feet(ft), inches(in) {}

      void getDist() {
         cout << "Enter feet: "; cin >> feet;
         cout << "Enter inches: "; cin >> inches;
      }

      void showDist() {
         cout << feet << " feet " << inches << " inches";
      }

      void addDist(Distance d2) {
         inches += d2.inches;
         feet += d2.feet;
         if (inches >= 12.0) {
            inches -= 12.0;
            feet++;
         }
      }
};

int main() {
   Distance d1, d2;

   cout << "Enter the first distance:" << endl;
   d1.getDist();

   cout << "\nEnter the second distance:" << endl;
   d2.getDist();

   d1.addDist(d2);

   cout << "\nTotal distance is:" << endl;
   d1.showDist();
   cout << endl;

   return 0;
}
