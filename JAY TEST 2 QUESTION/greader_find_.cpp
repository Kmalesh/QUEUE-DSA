#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(90<n && n<100)
    {
        cout<<"Exilent";
    }
    else if(80<n && n<90)
    {
        cout<<"v.v.good";
    }
    else if(70<n&& n<80)
    {
        cout<<"v.good";
    }
    else if(60<n&& n<70)
    {
        cout<<"good";
    }
    else if(50<n&& n<60)
    {
        cout<<"B";
    }
    else if(40<n&& n<50)
    {
        cout<<" C ";
    }
    else{
        cout<<"fail";
    }

return 0;
}