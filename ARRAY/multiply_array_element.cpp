#include<iostream>
using namespace std;
int main()
{
    int n,mul=1;
    cout<<"enter the size of memory:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        mul=mul*arr[i];
    }
    cout<<"multiple array is:"<<mul;
}