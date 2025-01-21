#include<iostream>
using namespace std;
class A
{
    int a,b;
    static int c;
    public:
    void show()
    {
        cout<<"Enter the number :";
        cin>>a;
        cout<<"Enter the number:";
        cin>>b;
    }
    void display()
    {
        cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<" "<<endl;
    }
};
int A::c;
int main()
{
    A ob;
    ob.show();
    ob.display();
    // ob1.show();
    // ob1.display();

    return 0;
}