#include<iostream>
using namespace std;
int main()
{
int cp,sp;
cout<<"enter your cost price:";
cin>>cp;
cout<<"enter your selling price:";
cin>>sp;
if(cp<sp)
{
   cout<<"profite:" <<sp-cp;
}
else if(cp>sp)
{
   cout<<"loss:"<<cp-sp;

}
else if(cp==sp)
{
   cout<<"no profite no loss";
}


 return 0;
}
     


   
