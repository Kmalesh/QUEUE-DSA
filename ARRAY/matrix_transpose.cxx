#include<iostream>
using namespace std;
int main()
{
    int a[4][2],transpose[2][4];
    cout<<"Enter the first number:";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
         cin>>a[i][j];
        }
        
    }

    // cout<<"Enter the second number:";
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //      cin>>b[i][j];
    //     }
    // }

//3333
//  for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//          cout<<b[i][j];
//         }
        
//     }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
          transpose[i][j]=a[i][j];
        }
        cout<<"\n ";
        
        
    }
   for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
         cout<<transpose[i][j]<<" ";
        }
        cout<<"\n";
    }
}