#include<iostream>
using namespace std;
int main()
{
    int search,i,j,f=0;
    int arr[]={32,43,53,52,13,};
    int n= sizeof(arr)/sizeof(4);
    cout<<"Enter your search elemrnt:";
    cin>>search;
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"Element is found! index no:"<<i;
    }
    else
    {
        cout<<"Element is not found!";
    }
    return 0;
}