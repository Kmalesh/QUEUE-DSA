#include<iostream>
using namespace std;
int main(){
int n,j;
cout<<"Enter the n number:";
cin>>n;
int s=1;
for(int i=1;i<=n;i++)
{
    
    for(int j=1;j<=n;j++)
    {
        cout<<s<<" ";
        s++;
        
    }
    cout<<endl;
}

return 0;
}