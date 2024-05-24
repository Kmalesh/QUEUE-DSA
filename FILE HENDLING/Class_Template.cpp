#include<iostream>
using namespace std;

template <class T>
class ABC
{
    public:
 T a,b;
  ABC(T m,T n)
  {
     a=m;
     b=n;
  }
  void display()
  {
    cout<<"addition:"<<a+b;
  }
};
int main()
{
    ABC <int>c(10,30);
    c.display();
}