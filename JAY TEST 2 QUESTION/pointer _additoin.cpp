#include<iostream>
using namespace std;
int  add(int*a,int *b)
{ 
 int &d=*a;
 int s=d;

  int &n=*b;
 int r=n;
 return s+r;
                                 //NOT COMPLETE 
}
int main()
{
    int a,b;
    a=10,b=20;
    add(&a,&b);
    cout<<add(&a,&b);

}