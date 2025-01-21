#include <iostream>
using namespace std;
int sumofproduct(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            sum = +arr[i] * arr[j];
        }
    }
    return sum;
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    cout << "sum of all product given array is:" << sumofproduct(arr, size);
    return 0;
}