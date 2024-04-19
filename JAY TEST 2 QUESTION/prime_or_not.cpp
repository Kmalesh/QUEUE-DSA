#include<iostream>
using namespace std;
int main()
{
   int n,f=0;

   cout<<"enter your number:" ;
   cin>>n;
   for(int i=0;i<=n;i++)
   {
      if(n%i==0)
      {
         f++;
      }
   }
   if(f==2)
   {
    cout<<"its prime number";
   }
   else{
    cout<<"its not prime number";
   }
   
}