#include <iostream>
using namespace std;
int main()
{
    int a = -10;
    try
    {
        if (a > 0)  //condition wrong 
        {
            cout << a;
        }
        throw a; //throww of a
    }

   catch(int a)  //catch of a
    {
        cout<<"a="<<a;
    }

 return 0;    
}