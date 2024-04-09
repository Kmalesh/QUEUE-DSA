#include<iostream>
using namespace std;
int swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
    
}
int main()
{
    int a=50,b=70;
   
    cout<<"before swappin "<<"a= "<<a<<" b= "<<b<<endl;
     swap(&a,&b);
     cout<<"after  swappin "<<"a= "<<a<<" b= "<<b;

    return 0;
}