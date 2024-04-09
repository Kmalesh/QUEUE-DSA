#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        if(i==3)
        {
          continue;  // break;
        }
        cout<<i<<endl;
    }
    return 0;
}