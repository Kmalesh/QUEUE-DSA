#include<iostream>
using namespace  std;
class a
{
    public:
    void display()
    {
        cout<<"Hii Hello"<<" ";
    }
};
class b:public a
{
    public :
    void display2()
    {
        cout<<"Chhodo"<<" ";
    }
};
class c:public a
{
   public :
    void display3()
    {
        cout<<"Radhe Krishna"<<" ";
    }
};
class d:public b,public c
{
    public:
    void display4()
    {
        cout<<"Bolo"<<" ";
    }
};
int main()
{
    b obj;
    obj.display();//callint for A class

    d obj2;
    obj2.display2();//calling for B class 
    obj2.display3();//calling for C class 
    obj2.display4();//callint for D class
  
  return 0;  
}
