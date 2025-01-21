#include<iostream>
using namespace std;
class A
{
    public:
    const int r=10;
    float PI=3.14;
    void show()
    {
     int c=PI*r*r;
     cout<<"Area of circle:"<<c;
    }
};
int main()
{
    A b;
    b.show();
    return 0;
}
