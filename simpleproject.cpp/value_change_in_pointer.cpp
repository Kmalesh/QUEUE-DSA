#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int* ptr=&a;
    cout<<a<<endl;
    *ptr=30; //value change baar bar kar sakte hai
     cout<<a<<endl;
}