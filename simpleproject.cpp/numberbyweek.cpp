#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "please enter the week of number:";
    cin >> n;
    if (n == 1 )
    {
        cout << "sunday";
    }
    else if (n == 2)
    {
        cout << "monday";
    }
    else if (n == 3)
    {
        cout << "tuesday";
    }
    else if (n == 4)
    {
        cout << "wednesday";
    }
    else if (n == 5)
    {
        cout << "thrusday";
    }
    else if (n == 6)
    {
        cout << "friday";
    }
    else if (n == 7)
    {
        cout << "saturday";
    }
    else
    {
        cout << ("its not week of number! because week is seven.");
    }
    return 0;
}