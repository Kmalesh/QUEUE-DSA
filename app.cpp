#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int j=1; j<=i;j++)
        {
         cout<<"*";

        }
        cout<<endl;
        
    }
}