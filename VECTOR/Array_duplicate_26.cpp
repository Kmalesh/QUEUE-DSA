#include<iostream>
using namespace std;
int reomveduplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=-1;
            }
        }
    }
    return 0;
}

int main(){
int arr[]={1,1,1,2,5};
int size=sizeof(arr)/sizeof(int);
reomveduplicate(arr,size);
for(int i=0;i<size;i++)
{
    if(arr[i]>0)
    {
        cout<<arr[i]<<" ";
    }
}
return 0;
}