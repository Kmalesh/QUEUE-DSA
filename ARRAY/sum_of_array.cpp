#include<iostream>
using namespace std;
int main()
{
    int  n, sum=0;
    cout<<"enter the  size of array:";
    cin>>n;
    float arr[n];
    for (int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    cout<<"sum of total number is:";
    for(int i=0;i<n;i++)
    {
     sum+=arr[i];
      
    }
    cout<<sum;
//    float v= sum/2;
//    cout<<v;
    


}