#include<iostream>
using namespace std;
int main()
{
  
    int arr[]={12,3,32,43,54,65,32,4};
    int n=sizeof(arr)/sizeof(int);
    int search;
    cout<<"Enter the search Element:";
    cin>>search;
   bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            flag=true;  //true means present
            break;
        }
    }
    if(flag==true)
   cout<<"Element is found";
    else
   cout<<"Element is not found";
    
    
return 0;
}