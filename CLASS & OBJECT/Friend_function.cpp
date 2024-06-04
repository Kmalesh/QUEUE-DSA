#include<iostream>
#include<stdio.h>
using namespace std;
class incometax
{
   int a,b;
   public:
   void getdata();
   friend int sum(incometax) ; //not member of class

};
void incometax::getdata()
{
    cout<<"Enter the wto number:";
    cin>>a>>b;
    
}
int sum (incometax obj)
{
    return( obj.a+obj.b);
}
int main()
{
   incometax obj;
   obj.getdata();
   cout<<"addition:"<<sum(obj);
}