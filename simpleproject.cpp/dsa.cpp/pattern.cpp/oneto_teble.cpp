#include<iostream>
using namespace std;
int main()
{
    int rows,collom,n;
    cout<<"enter the number :";
    cin>>n;
    
    for(rows=1;rows<=10;rows++)
    {
        for(collom=1;collom<=n;collom++)
        {
              cout<<rows<<"*"<<collom<<"="<<rows*collom<<"  ";

        }
         cout<<endl;
      
    }
}