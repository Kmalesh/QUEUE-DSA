#include<iostream>
using namespace std;
int main()
{
    int search,i;
    int arr[]={1,2,3,3,9,4,8,5,6,};
  int n=sizeof(arr)/sizeof(int);
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" "<<endl;
  }
  cout<<"enter the search elelment:";
  cin>>search;
  for(i=0;i<n;i++)
  {
    if(arr[i]==search)
    {
        break;
    }
  }
  if(i<n)
  {
    cout<<arr[i]<< " is found on index no : "<<i;
  }
  else
  {
    cout<<arr[i]<< " is not found!";
  }

  
}