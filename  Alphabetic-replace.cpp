// Alphabetic replace *

// Replace any alphabetic character with '_' in 2-character string passCode. Ex: If passCode is "9a", output is:
// 9_
// Hint: Use two if statements to check each of the two characters in the string, using isalpha().

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string passCode;

   cin >> passCode;

   /* Your solution goes here  */
   // Replace any alphabetic character with '_' in 2-character string passCode. 
   // Ex: If passCode is "9a", output is:
   // Hint: Use two if statements to check each of the two characters in the string,
   // using isalpha().
   // check if isalpha at index 0
   if ( isalpha(passCode.at(0))) {
      // change passCode character
      passCode.at(0) = '_';
   }

   if ( isalpha(passCode.at(1))) {
      passCode.at(1) = '_';
   }

   cout << passCode << endl;
   return 0;
}
