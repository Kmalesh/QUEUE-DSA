#include<iostream>
using namespace std;
void sum(int a,int b)
{
    for(int i=a;i<b;i++)
    {
        if(i%2==0)
        {
           cout<<i <<" ";
        }  
    }
}

int main(){
  int  v=10, z=20;
  sum(v,z) ;
return 0;
}