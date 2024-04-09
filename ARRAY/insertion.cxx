#include<iostream>
using namespace std;

int main(){
int a[100];
int i,n,p,v;
cout<<"size of array"<<endl;
cin>>n;
cout<<"Enter the element of array"<<endl;
for(int i=0; i<n; i++){
cin>>a[i];
}
cout<<"Enter the position"<<endl;
cin>>p;
cout<<"Enter the element "<<endl;
cin>>v;
for( i=(n-1); i>=(p-1); i--){
a[i+1]=a[i];
}
a[p-1]=v;
for( i=0; i<=n; i++){
cout<<a[i]<<endl;
}
return 0;
}