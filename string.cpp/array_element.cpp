#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the size of array:";
  cin>>n;
  
  int arr[n];
  for( int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
//   cout<<"the element is:";
  for( int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

    
}