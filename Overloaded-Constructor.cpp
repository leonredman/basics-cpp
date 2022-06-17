// Overloaded Constructor


#include <iostream>
#include <string>
using namespace std;

class Restaurant {
   public:
      Restaurant();
      Restaurant(string initName, int initRating);
      void Print();

    private:
      string name;
      int rating;
};

// Default constructor
Restaurant::Restaurant() {
   name = "NoName";
   rating = -1;
}

// Another constructor
Restaurant::Restaurant(string initName, int initRating) {
   name = initName;
   rating = initRating;
}

// Prints name and rating on one line
void Restaurant::Print() {
   cout << name << " -- " << rating << endl;
}

int main() {
   Restaurant foodPlace;              // Calls default constructor
   Restaurant coffeePlace("Joes", 5); // Calls another constructor

   foodPlace.Print();
   coffeePlace.Print();
   return 0;
}
