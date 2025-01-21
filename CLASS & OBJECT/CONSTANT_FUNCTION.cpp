#include<iostream>
using namespace std;
class A
{
    public:
    const double PI=3.14;
    int radius=4;
    void area()
     {
       int circle=PI*radius*radius;
       cout<<"Area of circle:"<<circle;
     }
};
int main()
{
    A obj;
    obj.area();
    return 0;
}
