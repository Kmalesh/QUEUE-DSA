#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,16,3,6,2,1};
    int n=sizeof(arr)/sizeof(int);
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        } if(flag==true)  break;
    }
   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
