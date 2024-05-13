#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Radhe Radhe\n";
    }
};
class B:public A //inherit the A class 
{
    public:
    void show1()
    {
      cout<<"Hare krishna\n";
    }
};
int main()
{
    B h;
    h.show();
}
