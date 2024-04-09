#include<iostream>
using namespace std;
int rec(int);
int main()
{
    int a,fact;
    cout<<"enter the number:";
    cin>>a;
    fact=rec(a);
    cout<<"factorial value is :"<<fact;
    return 0;
}
int rec( int x)
{
    int f;
    if(x==1)
    return(1);
else
f=x*rec(x-1);
return(f);
}

