#include<iostream>
using namespace std;
int main()
{
    int arr[]={ 2,4,6,8,0,88,99};
    int x;
   int n= sizeof(arr)/sizeof(int);
   cout<<"enter teh search element:";
   cin>>x;
    
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"searching  successfull!";
        }
        else{
            cout<<"element is not stored";
        }
        break;
    }
}