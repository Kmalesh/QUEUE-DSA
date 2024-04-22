#include <iostream>
using namespace std;

class a
{

  int n;

public:
  a()
  {

    n = 8;
    cout << n << endl;
  }
  ~a()
  {
    cout << "destroyed object " << endl;
    cout << n << endl;
  }
};
int main()
{
  a obj;
  return 0;
}