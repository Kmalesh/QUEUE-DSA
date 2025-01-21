#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,2,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            cout<<"Unique value:"<<arr[i];
        }
    }

return 0;
}