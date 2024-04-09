#include <iostream>
using namespace std;
int main()
{
  char n;
  cout << "enter your choice:";
  cin >> n;
  if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
  {
    cout << "vowel";
  }
  else
  {
    cout << "consonant";
  }
}