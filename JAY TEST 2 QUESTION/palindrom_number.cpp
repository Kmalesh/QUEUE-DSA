#include<iostream>
using namespace std;
int main ()
{
    int n,g,s1=0,c,r;
    cout<<"enter the number:";
    cin>>n;
    int s=n;
    while(n>0)
    {
       r= n%10;
       s=r+(s*10);
         n=n/10;
    }
    if(c==s)
    {
        cout<<"its a palindrom number";
    }
    else{
        cout<<"its not palindrom number";
    }
return 0;
}