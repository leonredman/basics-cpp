// Using pointers
#include <iostream>
using namespace std;

int main() {
   double vehicleMpg;
   double* valPointer = nullptr;
   
   valPointer = &vehicleMpg;
   
   *valPointer = 29.6; // Assigns the number to the variable
                       // POINTED TO by valPointer.
   
   // vehicleMpg = 40.0;   // Uncomment this later
   
   cout << "Vehicle MPG = " << vehicleMpg << endl;
   cout << "Vehicle MPG = " << *valPointer << endl;
   
   return 0;
}
  