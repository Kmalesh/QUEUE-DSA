#include<iostream>
using namespace std;
class cons
{
    public:
    int f=10;
    cons()
    {
        int x=f;
        cout<<x<<endl;
    }
    cons(int a,int b)//paramerized constructor
    {
        cout<<a<<" "<<b<<endl;
    }
    ~cons()//deconstructor
    {
        cout<<"destroyed object";
    }

};
int main()
{
    cons o; // declare object for calling 
    cons ob(20,30);//value pass

    return 0;
}