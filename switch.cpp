#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char choice;
    cout<<"enter your first number :";
    cin>>a;
    cout<<"enter tou second number:";
    cin>>b;
    cout<<"please select choice:,+,-,*,/";
    cin>>choice;

    switch(choice)
    {
      case '+':
      cout<<a+b;
      // if(choice=='+')
      // {
      //   cout<<a+b;
       break;
      // }
      case '-':
      cout<<a-b;
      //    if(choice=='-')
      // {
      //   cout<<a-b;
        break;
      // }
      case '*':
      cout<<a*b;
      //   if(choice=='*')
      // {
      //  cout<<a*b;
       break;
      // }
      case '/':
      cout<<a/b;

    //     if(choice=='/')
    //   {
    //     cout<<a/b;
     break;
      default:
    //   }
    //   cout<<"hey guys im kamalesh";
    //   break;
      
    }
    
    
}