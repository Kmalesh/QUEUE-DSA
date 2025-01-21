#include<iostream>
using namespace std;

 void t(int n)
{
    if(n>0)
    {
        t(n-1);     //not complete 
        cout<<n<<" ";
    }
    
}
int main()
{
    int t(3);

   
}
