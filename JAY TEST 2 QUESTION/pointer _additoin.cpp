#include<iostream>
using namespace std;
void  add(int*a,int *b)
{ 
    int temp =*a;
    *a=*b;
    *b=temp;
 
}
int main()
{
    int a,b;
    a=10,b=20;
    add(&a,&b);
    cout<<a<<b<<" ";
    
}