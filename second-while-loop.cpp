// Modify the program to include two-character .com 
//names where the second character can be a letter or a number, 
//as in a2.com. Hint: Add a second loop, following the while 
//(letter2 <= 'z') loop, to handle numbers.

#include <iostream>
using namespace std;

/* Output all two-letter .com Internet domain names */

int main() {
   char letter1;
   char letter2;
   int  num1;
   
   cout << "Two-letter domain names:" << endl;
   
   letter1 = 'a';
   while (letter1 <= 'z') {
      letter2 = 'a';
      num1 = 1;
      while (letter2 <= 'z') {
         cout << letter1 << letter2 << ".com" << endl;
         ++letter2;
         while (letter2 =='z' && num1 < 100) {
            cout << letter1 << num1 << ".com" << endl;
            ++num1;
            }
      }
      ++letter1;
   }
   
   return 0;
}