#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[]={9,0,8,0,30,0,4,50,05,0,33};
  int n= sizeof(arr)/sizeof(int );
   
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
        if(arr[j]==0)     //agar pahle 0 (zero ) hai to swap lar do.condition yahi hoga baki sab same rahega
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
  }
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
