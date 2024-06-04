#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,32,34,54,65,67,88,89};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    int second_max_no=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }    
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>second_max_no && arr[i]!=max)//
        {
            second_max_no=arr[i];
        }    
    }
    cout<<"Second largest number:"<<second_max_no;

  return 0;  
}