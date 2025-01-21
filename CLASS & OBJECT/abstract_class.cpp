#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()=0;

    void show()
   {
    cout<<"base class "<<endl;
   }
};
class B:public A
{ 
    public:
    void show()
    {
        cout<<"derived class";
    }
};
int main()
{
   A *p;
   B nm;
   p=&nm;
   p->show();
    
return 0;
}