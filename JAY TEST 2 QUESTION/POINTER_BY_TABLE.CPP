#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);

    for(int i=1;i<=10;i++)
    {
       cout<<a*i<<" "<<b*i<<endl;
    }
    // cout<<b+a;
    

    return 0;
}