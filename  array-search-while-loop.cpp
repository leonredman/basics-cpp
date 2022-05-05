// array search - while loop 

#include <iostream>

using namespace std;

void main()
{
  // create and initialize parrallel arrays (corresponding info is related by index, access by one index)
  int Sales[4] = { 3000, 2311, 5000, 1023 };
  string SalesAssociate[4] = { "Mark Winston", "Jason Tate", "Ana Jones", "Lisa Polkman" };
  string strAssociateInput, fname ,lname;
  cout << endl << endl;

  // Get first and last name
  cout << "This program searches for a sale's associate via the first and last name." << endl;
  cout << "If found the program will display the associate's total sales for the week." << endl << endl;
  cout << "Please endter the sales associate first name: ";
  cin >> fname;
  cout << "Please enter the sales associate last name: ";
  cin >> lname;

  // Concatenate first and last name
  strAssociateInput = fname + " " + lname;

  // initialize variables for while loop
  bool found = false;
  int i = 0;

  // use while loop when searching array for sales associate
  while ((found == false) && (i < 4)) {

    if (Sales Associate[i] == strAssociateInput)
    {
      found = true;
      cout << "Sales Associate: " << SalesAssociate[i] << endl;
      cout << "Total Sales $" << Sales[i] << endl << endl;
    
    }
    i = i + 1;
  }

// message if sales associate is not found
if (found == false)
    cout << "sales Associate " << strAssociateInput << " not found." << endl;

}