#include<iostream>
using namespace std;
int main()
{
    int i;
    int search,f=0;
    int a[]={21,52,8,1,90};
    cout<<"enter the search element:";
    cin>>search;
    for(int i=0;i<5;i++)
    {
        if(a[i]==search)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"search found!"<<endl<<arr[mid];
    
    }
    else
        cout<<"not found!"<<endl;
    }

}