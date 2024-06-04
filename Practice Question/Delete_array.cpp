#include<iostream>
using namespace std;
int main()
{
    int arr[5]={23,3,12,42,11},i,pos;
    cout<<"Enter the delete position:";
    cin>>pos;
    for(i=pos;i<5;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<4;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
     cout<<"DElete element is:"<<arr[i]<<endl;
    return 0;
}