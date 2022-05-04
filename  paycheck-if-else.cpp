// Paycheck - if-else : This file contains main function

#include<iomanip> // libraries
#include<iostream>
#include<conio.h>

using namespace std; // output using only cout

int main() // program starts in the main() function
{

  // declare variables
  int hours = 0;
  int hourstimehalf = 0
  int hoursdouble = 0;
  string strEmployeeFName, strEmployeeLname;
  float payrate = 0;
  float paycheckamount = 0;

  //Input
  cout << "Please enther the employee's first name: ";
  cin >> strEmployeeFname;
  cout << "Please enter the employee's last name: ";
  cin >> strEmployeeLname
  cout << "Please endter the employee's payrate: ";
  cin >> payrate;
  cout << "Please enter the employee's hours: ";
  cin >> hours;

  // processing
  if (hours <= 40) {
    paycheckamount = hours * payrate;
  }
  else if  ((hours > 50) && (hours <= 50)) // compound decision
  {
    hourstimehalf = hours - 40;
    paycheckamount = 40 * payrate + (float) hourstimehalf * payrate * 1.5;
  }
  else {
    hoursdouble = hours - 50;
    paycheckamount = 40 * payrate + 10.0 * payrate * 1.5 + (float) hoursdouble * payrate * 2;
  }

// output
cout << "Employee Name: " << strEmployeeFname << " " << strEmployeeLname << "\n";
cout << "Pay Check Amount $" << fixed << setprecision(2) << paycheckamount << "\n\n";

return 0;

}