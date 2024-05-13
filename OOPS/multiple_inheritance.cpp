
#include<iostream>
using namespace std; 
class A
{
    public:
    void disp1()
    {
        cout<<"Krishna..... \n";
    }
};
class B
{
    public:
    void disp()
    {
        cout<<"Hare.. Krishna....\n";
    }
};
class C:public A,public B
{
    public:
    void disp2()
    {
        cout<<"Vashudewa\n";
    }
};
int main()
{
  C om;
  om.disp1();
  om.disp();
  om.disp2();
  
}