#include<iostream>
using namespace std;

int sum (int a, int b )
{
// {   int c = a+b;
//   cout<<"the sum is :"<<c;
return a+b;
    
   
    
} ;
int sub (int a, int b )
{
// {   int d = a-b;
//   cout<<"the sub is :"<<d;
    return a-b;
   
    
} ;
int mul (int a, int b )
{
//    int f = a*b;
//   cout<<"the sum is :"<<f;
    
   
    return a*b;
} ;
// int div(int a, int b )
// {
// // {   int g = a/b;
// //   cout<<"the the division is :"<<g;;
    
//    return a/b;
    
// } ;
int main()
{
  int a,b;


  cout<<"enter the first number:";
  cin>>a;
  cout<<"enter the secon number:";
  cin>>b;
  char ch;
  cout<<"enter your choice:,+ ,-,*,/:";
  switch(ch)
  {
    case '+':
      sum();
      break;
  }
  
//   cout<<value<<endl;
  return 0;
}