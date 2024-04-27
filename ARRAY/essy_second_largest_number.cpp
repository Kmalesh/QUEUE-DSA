#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,2,3,43,45,33,1,64,-0};
    int n=sizeof(arr)/sizeof(4);
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<largest;
}