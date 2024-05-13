#include<iostream>
using namespace std;
class a
{
    protected:
    string name="hii hello chhodo"; 
    void display()
    {
     cout<<name<<" ";
    }
};
class b:public a
{
    public:
  void display1()
  {
   cout<<"Radhe krishna"<<" ";
  }
};
class c: public b  //c class B class ko inherit kiya hai to sabse pahle call yahi hoga 
{
    public:
   
    void dispaly2()
    {
        cout<<" bolo";
    }
};
int main()
{
    c obj;    //object of c class 
    obj.display1(); 
    
    

}