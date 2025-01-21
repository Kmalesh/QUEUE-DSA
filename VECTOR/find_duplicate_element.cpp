#include<iostream>
using namespace std;
int duplicatenumber(int arr[],int size)
{
    cout<<"duplicate number:";
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;
                
            }
        }
    }
    return 0;
}
int main(){
int arr[]={2,1,3,2,5,4,6,6,5};
int size=sizeof(arr)/sizeof(int);
duplicatenumber(arr,size);
cout<<"\n";
cout<<"unique number:";
for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            cout<<arr[i]<<" ";
        }
    }
return 0;
}