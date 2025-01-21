#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{4, 2, 3}, {7, 6, 2}, {3, 2, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}
