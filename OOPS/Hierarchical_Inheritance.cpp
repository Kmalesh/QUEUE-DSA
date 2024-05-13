#include<iostream>
using namespace std;
class A
{
    public:
 void show1()
 {
    cout<<"Radhe Rahdhe\n";
 }
};
class B:public A 
{
 public:
 void show2()
 {
    cout<<"Hare krishna\n";
 }
};
class C:public A
{
    public:
    void show3()
    {
        cout<<"Ram \n";
    }
};
class D:public A
{
    public:
    void show4()
    {
        cout<<"Sita\n";
    }
};
int main()
{
    D m;
    m.show1();
    m.show4();

   C H;
   H.show1();
   H.show3();

   B G;
   G.show1();
   G.show2();


   


}