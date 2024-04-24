// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={ 2,4,6,8,0,88,99};
//     int x;
//    int n= sizeof(arr)/sizeof(int);
//    cout<<"enter teh search element:";
//    cin>>x;
    
    
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==x)
//         {
//             cout<<"searching  successfull!";
//         }
//         else{
//             cout<<"element is not stored";
//         }
//         break;
//     }
// }
#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,7,8,9,12,13,14,15,16};
    int low,high,mid,s,f=0;
   low=0;
   high=9;
   cout<<"enter search element :";
   cin>>s;
   
   while(low<=high)
   {
        mid=(low+high)/2;
        if(arr[mid]==s)
        {
        f=1;
        break;
        }
        if(s>arr[mid])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
   }
   

   if(f==1)
   {
    cout<<"element found :";
   }
   else{
    cout<<"not found :";
   }
   return 0;
}