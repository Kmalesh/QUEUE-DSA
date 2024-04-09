#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,23,3,44,55,5,6,4};
    int n=sizeof(arr)/sizeof(int);
    int mx=arr[0];
    for(int i=0;i<n;i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
        }
    }
    cout<<mx;

}