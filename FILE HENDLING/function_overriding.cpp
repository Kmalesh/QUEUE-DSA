#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout <<"Radhe Radhe\n";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"hello\n";
    }
};
int main()
{
    B a;
    a.show();
}
