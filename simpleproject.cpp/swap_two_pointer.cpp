


#include<iostream>
using namespace std;
void swap(int* a, int* b)

{
    int temp=*a;
    *a =*b;
    *b=temp;

  
}
int main()
{
    int a,b,c;
    cout<<"enter the number:";
    cin>>a;
    cout<<"enter the second number :";
    cin>>b;
    cout<<"two number:"<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"swap number:"<<b<<" "<<a;
    // cout<<a<<" "<<b<<endl;
    // swap(&a,&b);
    // cout<<b<<" "<<a;
return 0;
}