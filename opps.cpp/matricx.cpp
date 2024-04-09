#include<iostream>
using namespace std;
int main()
{
    int a[3][2],b[4][2],sum[3][4];
    cout<<"enter the first matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for( int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    cout<<"enter the second  matrix:"<<endl;
    for(int i=0;i<4;i++)
    {
        for( int j=0;j<2;j++)
        {
            cin>>b[i][j];
        }
        
    }
    
    cout<<" first matrix is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for( int j=0;j<2;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    cout<<" second  matrix is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for( int j=0;j<2;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            
        }

    }
    cout<<"total matrix is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<sum[i][j]<<"\t";
        }
        cout<<"\n";
    }


return 0;

}