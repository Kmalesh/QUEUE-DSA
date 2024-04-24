#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the  size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter array element:";
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int search;
    cout<<"enter the search element:";
    cin>>search;
    for( i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            cout<<"searching successfull!"<<endl;
            
        }
       
    }
     if(arr[i]>n)
     {
        cout<<"the element of index no:"<<i<<endl;
    }
    else{
        cout<<"element not found!"<<endl;
    }
}

