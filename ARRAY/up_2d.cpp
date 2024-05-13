#include <iostream>
using namespace std;
int amin()
{
    int a[2][2], b[2][2], c[2][2];
    cout << "enter the first number :";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "enter second bnumber :";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    }

    return 0;
}