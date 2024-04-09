#include<iostream>
using namespace std;
int main()
{
    int size,i,*array;
    cout<<"enter the size of element:";
    cin>>size;
    array=(int*) malloc(size *sizeof(int));

    cout<<"enter the value of array:";
    for(i=0;i<size;i++)
    {
        cin>>array[i];
    }
   
   cout<<" the value of array is: "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<array[i]<<" \t"<<endl;;
    }
    cout<<"kamalesh";
    

    
    
return 0;
    
}
