#include<iostream>
using namespace std;
int main()
{
   int index=1;
  int arr[]={2,11,23,24,54,77,54};
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
  arr[index]=;
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
