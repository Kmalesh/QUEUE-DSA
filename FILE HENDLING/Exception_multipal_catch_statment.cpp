#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    try
    {
        if (n == 0)
        {
            throw(n); // throw integer
        }
        if (n == 100)
        {
            throw('h'); // throw character
        }
        if (n == 500)
        {
            throw(5.8F); // throw float
        }
    }


    catch (int n) // catch integer no
    {
        cout << "int number:" << n;
    }
    catch (char n) // catch character no
    {
        cout << "char no:" << n;
    }
    catch ( float  n) // catch floating no
    {
        cout << "float no:" << n;
    }
    // catch(...)
    // {
    //     cout<<"error";
    // }

    return 0;
}
