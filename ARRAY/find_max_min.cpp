#include <iostream>
using namespace std;
int main()
{
    int i, max, min;
    int arr[] = {12, 21, 4, 55, 77, 99};
    int n = sizeof(arr) / sizeof(int);
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the max number:" << max << endl;
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "the minimum number:" << min;
}