#include <iostream>
using namespace std;
int main()
{
  int a, b;
  char choice;
  cout << "enter your first number :";
  cin >> a;
  cout << "enter tou second number:";
  cin >> b;
  cout << "please select choice:,1.+\n,2.-\n,3.*,4./\n";
  cin >> choice;

  switch (choice)
  {
  case 1:
    //   cout<<a+b;
    if (choice == '+')
    {
      cout << a + b;
      break;
    }
  case 2:
    //   cout<<a-b;
    if (choice == '-')
    {
      cout << a - b;
      break;
    }
  case 3:
    //   cout<<a*b;
    if (choice == '*')
    {
      cout << a * b;
      break;
    }
  case 4:
    //   cout<<a/b;

    if (choice == '/')
    {
      cout << a / b;
      break;
    }
    default:
    cout << "hey guys im kamalesh";
    
  }
}