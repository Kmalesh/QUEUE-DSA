#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,32,2,4,34,20,5};
    int n=sizeof(arr)/sizeof(int);
   
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
  cout<<"sequnce Array:";
     for(int i=0;i<n-1;i++)
     {
        cout<<arr[i]<<" ";
     }

return 0;
}