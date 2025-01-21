#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i,j,zero=0,nzero=0;
    cout<<"Enter the element:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"sparse  element is:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
    }
    cout<<"Enter the element:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
              zero++;
            }
            else{
                nzero++;
            }
            if(nzero>zero)
            {
                cout<<"not sparse matrix"; //not complete codeit up 
            }
        }
    }

}