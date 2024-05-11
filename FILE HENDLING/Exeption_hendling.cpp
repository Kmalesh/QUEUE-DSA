#include <iostream>
using namespace std;
int main()
{
    int ddd = 100;
    try
    {
        if (ddd<0)  // here condition wrong 
        {
            cout<<ddd;
        }
        else{

            throw(ddd);  //throw ddd value 
        }
    }

    catch(int ddd)  //catch ddd value
    {
        cout<<"ddd="<<ddd;
    }
   return 0;
}
