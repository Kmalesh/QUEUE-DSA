#include<iostream>
using namespace std;
class A
{
    int a ,b;
    static int c;
    public:
    void gatedata (int x,int y) //normal function
    {
        a=x;
        b=y;
        
    }
   void putdata() //normal function
    {
         cout<<"a="<<a<<" "<<"b="<<b <<" ";//<<"c="<<c;
    }
   static void dis()
   {
     cout<<"c="<<c;//a is non static data member
   }
};
int A::c;
int  main()
{
    A aa,bb;
    aa.gatedata(5,10);
    bb.gatedata(20,30);
    aa.putdata();
    bb.putdata();

    return 0;
}