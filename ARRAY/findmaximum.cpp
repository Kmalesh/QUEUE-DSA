#include<iostream>
using namespace std;
int main()
{
    int arr[4],i,max;
     cout<<"enter a number ";
    for(i=0;i<4;i++)
    {
       
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<4;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }cout<<"the max number is "<<max;
    return 0;
}