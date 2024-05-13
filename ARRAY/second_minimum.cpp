#include<iostream>
using namespace std;
int main()
{
   int index=0;
  int arr[]={2,3,23,24,54,77,54};
  int n= sizeof(arr)/sizeof(int);
  int min=arr[0];
  for(int i=0;i<n;i++)
  {
   if(arr[i]<min)
   {
    min=arr[i];
    index=i; 
   }

  }
  cout<<"minimum number:"<<min<<endl;
  arr[index]=98745632;
  int min2=arr[0];
  for(int i=0;i<n;i++)
  {
   if(arr[i]<min2)
   {
    min2=arr[i];
    index=i; 
   }

  }
  cout<<"minimum number:"<<min2<<endl;
}
