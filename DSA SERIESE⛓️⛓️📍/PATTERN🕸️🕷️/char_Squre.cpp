#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the n number:";
cin>>n;

for(int i=1;i<=n;i++)
{    char s='A';
    for(int j=1;j<=n;j++)
    {
        cout<<s<<" ";
        s++;
    }
    
    cout<<endl;
}

return 0;
}