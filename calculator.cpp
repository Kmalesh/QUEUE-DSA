#include<iostream>
using namespace std;
main()
{
    int a,b;
    char choice;
    
    cout<<"enter tour first number:";
    cin>>a;
    cout<<"enter your second number:";
    cin>>b;

    cout<<"please select your choice:,+,-,*,/"<<endl;
    cin>>choice;

    if(choice=='+')
    {
        cout<<a+b;

    }
    else if(choice=='-')
    {
        cout<<a-b;
    }
    else if(choice=='*')
    {
      cout<<a*b;
    }
    else if (choice=='/')
    {
        cout<<a/b;
    }
    

}