#include<iostream>
using namespace std;
int main()
{
    int search,f=0,mid;
    int arr[]={12,32,43,45,85,90};
    int lb=0,ub=5;
    cout<<"Enter your search number:";
    cin>>search;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(arr[mid]==search)
        {
            f=1;
            break;
        }
        if(arr[mid]<search)
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
    if(f==1)
    {
        cout<<"Element is found ! index no :"<<mid;
    }
    else{
        cout<<"Element is not found!";
    }
    return 0;
}