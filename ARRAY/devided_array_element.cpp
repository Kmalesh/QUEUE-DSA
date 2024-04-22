
#include<iostream>
using namespace std;
int main()
{
    int n;
    float dev=0.0;
    cout<<"enter the size of memory:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        dev=dev+arr[i];
    }
    int v=dev/2;
    cout<<"multiple array is:"<<v;
}
