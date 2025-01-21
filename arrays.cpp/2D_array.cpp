#include<iostream>
using namespace std;
int main()
{
    int a[2][2]={{1,2},{2,2}};
    int b[2][2]={{1,2},{2,1}};
    int c[2][2];
    for(int i = 0; i <2; i++){
        for(int j = 0; j <2; j++){
        c[i][j]=a[i][j]+b[i][j];

    }

    cout<<endl;
    }
    cout<<"two matrix is:"<<endl;
    for( int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

   

}
