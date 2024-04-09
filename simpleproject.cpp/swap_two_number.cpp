#include<iostream>
using namespace std;
int main()
{
    //using three variable
    int a,b,c;
    cout<<"enter the number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"two number;"<<a <<" "<<b<<endl;
    cout<<"swap number:"<<b<<" "<<a;

}
