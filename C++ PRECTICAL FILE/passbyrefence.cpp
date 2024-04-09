#include<iostream>
using namespace std;
int swap(int* a,int* b)
{
    int c = *a;
    *a=*b;
    *b=c;
    return 0;
}
int main()
{
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"before swapping"<<" a = "<<a<<" and "<<" b = "<<b<<endl;
    swap(&a,&b);
    cout<<"after swapping"<<" a = "<<a<<" and "<<" b = "<<b;
    
    

}