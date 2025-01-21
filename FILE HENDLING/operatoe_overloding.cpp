#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    void show(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" "<<b;
    }
    void operator -()
    {
       a=-a;
       b=-b;
    }

};
int main()
{
    A ob;
    ob.show(10,20);
    -ob;
    ob.display();
}