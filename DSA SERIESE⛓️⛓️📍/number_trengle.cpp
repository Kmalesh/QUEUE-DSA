#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Entet number;";
cin>>n;

for(int i=1;i<n;i--)
{  //int num=1;
    for(int j=1;j<i+1;j++)
    {
     //   cout<<num<<" ";
     //   num++;
    cout<<j;
    }

    cout<<endl;
    
}
return 0;
}