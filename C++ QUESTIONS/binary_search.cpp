#include<iostream>
using namespace std;
int main()
{
     int arr[]={1,2,3,4,5,6,7};
    
    int  lr=0,up=7,mid,search,f=0;
    cout<<"Enter the serch element :";
    cin>>search;
    while(lr<up)
    {
        mid=(lr+up)/2;
        for(int i=0;i<7;i++)
        {
            if(arr[mid]==search)
            {
               f=1;
               break;
            }

             if(arr[mid]<search)
            {
                lr=mid+1;
            }
            else{
                up=mid-1;
            }
        }
    }
    if(f==1)
    {
        cout<<"Element is found! index no "<<mid<<endl;
    }
    else{
        cout<<"Not found!";
    }

return 0;
}