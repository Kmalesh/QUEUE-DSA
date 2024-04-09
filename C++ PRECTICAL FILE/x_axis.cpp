#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter the x number:";
    cin >> x;
    cout << "enter the y number:";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "center";
    }
     if (x == 0 && y != 0)
    {
        cout << "y axis";
    }
     if (x != 0 && y == 0)
    {
        cout << "x axis";
    }
     if (x > 0 && y > 0)
    {
        cout << "(+ +) ist";
    }
     if (0 > x && y > 0)
    {
        cout << "(- +) 2nd";
    }
     if (0 > x && 0 > y)
    {
        cout << "(--) 3rd";
    }
     if (x > 0 && 0 > y)
    {
        cout << "(+ -) 4rd";
    }

    return 0;
}