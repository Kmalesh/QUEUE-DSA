#include<iostream>
using namespace std;
class A
{
    public:
  virtual  void show() //base class me virtual likhne jiska object hoga wahi wala function call  hoga   
    {
        cout<<" Class A\n"; //aur virtual nahi likhne se kisi ka bhi   objest declare karo call to base class me hi hoga  
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"Class B\n";
    }
};
 class C:public B
{
    public:
    void show()
        {
          cout<<"Class C\n";
        }
};
int main()
{
    A m,*p;
    p=&m;
    p->show();
    
    B u;   
    p=&u;
    p->show();
    

    
}