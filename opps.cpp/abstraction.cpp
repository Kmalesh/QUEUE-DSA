#include <iostream>
using namespace std;
class motocycle
{
  bool startEngine;
  //   all these bakend code is hiding .we cannt see
  public:
  void start()
  {
    startEngine = true;
    cout << "bike start" << endl;
  }
  void drive()
  {
    if (startEngine)
    {
      cout << "ok lets go";
    }
    else
    {
      cout << "whiout key bike not start ";
    }
  }
};
// bakend

int main()
{
  motocycle p;
  // buy a motocycle , start and drive ; ye sab ham sirf jante hai
  p.start();
  p.drive();
}
// frontdend;