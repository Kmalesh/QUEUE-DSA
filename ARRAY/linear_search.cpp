#include<iostream>
using namespace std;
int main()
{
    int size,i,search;
    cout<<"enter the size of memory:";
    cin>>size;
    int arr[size];
    cout<<"enter element of array";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the search element:";
    cin>>search;
        for(i=0;i<size;i++)
    {
        if(arr[i] == search)
        {
            cout<<"searching successful!"<<endl;
             break;
        }
      
    }
  if(i<size)
    {
        cout<<"the element index of "<<i;
    }
     else{
        cout<<"not found";
        }
    
}
