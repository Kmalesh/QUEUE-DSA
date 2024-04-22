#include<iostream>
using namespace std;
int main()
{
    int i,j;

    int a[]={33,4,5,65,6,1,66,14,-1};
    int n=sizeof(a)/sizeof(int);
     
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}