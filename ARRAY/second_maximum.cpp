#include<iostream>
using namespace std;
int main()

{
    int index=0;
    int arr[]={23,43,44,2,4,5,22,64,-1};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;

        }
    }
    cout<<"first maximum number:"<<max<<endl;
    arr[index]=0;
    int smax=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>smax)
        {
            smax=arr[i];
            index=i;

        }
    }
     cout<<" second maximum number:"<<smax<<endl;

}