#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,*ptr,size;
    cout<<"enter the size of memory:"<<endl;
     cin>>size;
      cout<<"insert the element of array;";
     ptr=(int*)calloc(size,sizeof(int));
     for(i=0;i<size;i++)
     {
        cin>>ptr[i];
     }
     cout<<"the element of array is :";
     for(i=0;i<size;i++)
     {
        cout<<ptr[i]<<"\t";

     }
    
} 