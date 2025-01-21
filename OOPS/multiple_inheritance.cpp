
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
        cout<<"Vashudewa\n";   // function Overriding 
    }
};
int main()
{
  C cout;
  cout.disp1();
  cout.disp();
  cout.disp2();
  
}