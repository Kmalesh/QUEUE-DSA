#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    try
    {
       if (i==1)
        {
            cout << i << " ";
            
        }
        throw i;
    }
    catch (int i)
    {
        cout<<"i="<<i;
    }
  return 0;  
}