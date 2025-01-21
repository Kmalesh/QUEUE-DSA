#include<iostream>
using namespace  std;
class a
{                             //virtual class /
    public:
    void display()
    {
        cout<<"Hii Hello"<<" ";
    }
};
class b:public virtual  a
{
    public :
    void display2()
    {
        cout<<"Chhodo"<<" ";
    }
};
class c:public virtual a
{
   public :
    void display3()                  //
    {
        cout<<"Radhe Krishna"<<" ";
    }
};
class d:public b,public c   //Class D class A ko call nahi kaer sakta but virtual lagane se access ho jayega 
{
    public:            //for example yaha
    void display4()
    {
        cout<<"Bolo"<<" ";
    }
};

int main()
{
    d obj;
    obj.display();//callint for A class
    obj.display2();//calling for B class 
    obj.display3();//calling for C class 
    obj.display4();//callint for D class
  
  return 0;  
}
