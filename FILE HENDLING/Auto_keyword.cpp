#include<iostream>
#include<stdio.h>
using namespace std;
class A
{
    public:
    int  sum(auto a,auto b)
    {
      cout<<a<<endl;
      cout<<b<<endl;
      
    }

    void sum(auto c)
    {
        // auto name="kamalesh kumar";
        cout<<c<<endl;
    }
};
int main()
{
  system("cls");
    A obj;
    obj.sum(10);
    obj.sum(10.7);
     obj.sum("kamalesh");
}