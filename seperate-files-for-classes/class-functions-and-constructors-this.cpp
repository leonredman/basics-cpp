//class functions and constructors using 'this'
#include <iostream>
using namespace std;

class ElapsedTime {
   private:
      int hours;
      int minutes;

   public:
      void SetTime(int timeHr, int timeMin);
};

void ElapsedTime::SetTime(int timeHr, int timeMin) {
   this->hours = timeHr;
   this->minutes = timeMin;
}

int main() {
   ElapsedTime travTime;
   int userHrs;
   int userMins; 

   userHrs = 5;
   userMins = 34;

   travTime.SetTime(userHrs, userMins);

   return 0;
}