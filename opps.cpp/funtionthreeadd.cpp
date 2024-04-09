#include <iostream>
using namespace std;
int sum(int a, int b, int c)
{

  return a + b + c;
  // cout<<z;
};
int main()
{
  int a, b, c, value;
  cout << "enter the three number:";
  cin >> a >> b >> c;
  value = sum(a, b, c);
  cout << value << endl;
  return 0;
}
