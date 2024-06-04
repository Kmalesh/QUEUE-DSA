#include<iostream>
using namespace std;

int main(){
    int x,i;
cout<<"Enter the X given number:";
cin>>x;
int count=0;
int arr[]={12,23,43,54,21,54,65,56,32,22};
int n= sizeof(arr)/sizeof(int);
for( i=0;i<n;i++)
{
    if(arr[i]>x)
    {
        count++;
        cout<<arr[i]<<endl;
    }
}
cout<<"greater than X Elemnt is :"<<count<<" ";

return 0;
}
