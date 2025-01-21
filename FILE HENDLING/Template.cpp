#include<iostream>
using namespace std;
template <class t>
t sum(t a,t b)
{
 t c= a+b;
    cout<<c<<endl;
    return 0;
}
template <class p>
p som(p m,p n)
{
  p  f=m*n;
    cout<<f;
    return 0;
}
int main()
{
  sum(10,20);
  sum(1.5,5.3);
  som(5,5);
  return 0;
}
