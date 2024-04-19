#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter your number: ";
  cin >> n;
  if (0 < n)
  {
    cout << "absolute value!", n;
  }
  if (0 > n)
  {
    n = n * (-1);
    cout << "abslute value :", n;
  }
  cout << n;
}
