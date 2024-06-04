#include<iostream>
using namespace std;
int main(){
int arr[]={11,43,54,22,4,65,77,};
int n=sizeof(arr)/sizeof(int);
int max=arr[0];

for(int i=0;i<n;i++)//n-1 likhne secon maximum number aa jayega
{
    if(max<arr[i])
    {
        //max=arr[i];
        max=(max,arr[i]); //inbuilt function yaise bhi max find hoga
    }
}
 cout<<"maximum is "<<max;

return 0;
}
