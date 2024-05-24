#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first nad second number for devisin:";
    cin>>a>>b;
    try
    {
        
        
        if(b!=0)
        {
        c=a/b;
         
          cout<<"Devision:"<<c<<endl;
        }
        
       
        throw b;
    }
    catch(int c)
    {
       cout<<"Devision value:"<<c;
    }
    return 0;
}
