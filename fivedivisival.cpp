#include<iostream>
// using namespace std;
main ()
{
    int n;
    std::cout<<"enter your number:";
   std:: cin>>n;
    if(n%5==0)
    {
       std:: cout<<"yes! divisible by five ";

    }
    else if(n%5!=0)
    {
       std:: cout<<"not divisible by five";
    }
}