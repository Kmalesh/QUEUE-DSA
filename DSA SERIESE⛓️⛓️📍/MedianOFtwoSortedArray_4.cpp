#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 3, 4};
    int s = 0, end = 4;
    for(int i=s;i<end;i++)
    {
        for(int j=s+1;j<end;j++)
        {
          if (arr[i]!=arr[end]) 
          {
            arr[i]=arr[j];
            break;

          }
       
        }
         
        
    }
    for(int s=0;s<end;s++)
    {
     if(arr[s]>0)
     {
        cout<<arr[s]<<" ";
     }
    }

//     return 0;
 }