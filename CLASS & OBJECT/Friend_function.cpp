#include<iostream>
#include<stdio.h>
using namespace std;
class demo
{
   int a,b;
   public:
   void getdata();
   friend int sum(demo) ; //not member of class

};
void demo::getdata()
{
    cout<<"Enter the wto number:";
    cin>>a>>b;
    
}
int sum (demo obj)
{
    return( obj.a+obj.b);
}
int main()
{
    system("cls");
   demo obj;
   obj.getdata();
   cout<<"addition:"<<sum(obj);
}