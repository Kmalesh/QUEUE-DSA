#include<iostream>
using namespace std;
class A
{
    public:
    virtual void hhh()=0;
    void  sum()
    {
      cout <<"hello ";
    }
};
class B:public A
{
    public:
  void sum()        //not complete
    {
         cout<<"hhh";
    }
};
int main()
{
    
   
    
    
    
}