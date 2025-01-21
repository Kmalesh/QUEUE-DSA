#include<iostream>
using namespace std;
class A
{
    public:
    virtual void sum()=0;
    void  sum1()
    {
      cout <<"hello ";
    }
};
class B:public A
{
    public:
  void sum2()        //not complete
    {
         cout<<"hhh";
    }
};
int main()
{
    
   A *p,m;
   p=&m;
   B b;
  p->sum1();
  p=&b;
  p->sum();
    
}