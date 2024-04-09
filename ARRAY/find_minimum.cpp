#include<iostream>
using namespace std;
int main()
{
    int i;
    // cout<<"enter the size of memory:";
    // cin>>n;
    int arr[]={20,30,50,84,};
    int n=sizeof(arr)/sizeof(int);

    int max=arr[0];
    for(i=0;i<n;i++)
    {
         if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"maximum value is:"<<max;

    
       
}