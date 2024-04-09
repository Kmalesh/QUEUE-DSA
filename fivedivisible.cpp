#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number;";
    cin>>n;

    if(n%5==0)
    {
        cout<<"divisible by five ";
    }
    if(n%5!=0)
    {
        cout<<"not divisible by five";
        
    }
}