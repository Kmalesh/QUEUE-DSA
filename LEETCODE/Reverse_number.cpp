#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the element:";
  cin>>n;
  int reverse=0,reminder;
  while(n>0)
  {
    reminder=n%10;
    reverse=reverse*10+reminder;
    n=n/10;

  }
  cout<<reverse;

  return 0;
}