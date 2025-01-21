#include <iostream>
using namespace std;
int maxnumber(int arr[],int size)
{
    int maximum= INT_MIN;int i;
    for( i=0;i<size;i++)
    {
        if(arr[i]>maximum)
        {
            maximum=arr[i];
        }
    }
    cout<<"max number is  "<<maximum<<" and index number is:"<<i<<endl;
    return 0;
}
int minnumber(int arr[],int size)
{
    int minimum= INT_MAX;int i;
    for( i=0;i<size;i++)
    {
        if(arr[i]<minimum)
        {
            minimum=arr[i];
            break;
        }
    }
    cout<<"min number is  "<<minimum<<" and index number is:"<<i<<endl;
    return 0;
}
int main()
{
    int arr[] = {12, 30, 43, 54, 56, 63, 64};
    int size = sizeof(arr) / sizeof(int);
    maxnumber(arr,size);
    minnumber(arr,size);
    return 0;
}