#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int a[2][2]={{1,2},{1,2}};
    int b[2][2]={{1,2},{1,2}};
    int arr[2][2];
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            arr[i][j]= a[i][j]+b[i][j];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   

}