#include<iostream>
using namespace std;
int sum(int a,int b)
{
   return a+b;
}
int main()
{
 int a,b;
 cout<<"enter the number:";
 cin>>a;
 cout<<"enter the number :";
 cin>>b;
  int value=sum(a,b);
  cout<<"sum of two number:"<<value;
  return 0;
  

}
   