#include<iostream>
using namespace std;
int main()
  {   int i,j;

    int arr[]={20,23,54,2,-5};
    int n=sizeof(arr)/sizeof(int );
    
    for(i=0;i<n-1;i++)
    {
        int min=INT_MAX;
        int index=-1;
        for(j=i;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                index=j;
            }
        }
        swap(arr[i],arr[index]);

    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}   