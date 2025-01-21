#include <iostream>
using namespace std;
int uniquenumber(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[] = {2, 3, 2, 4, 5, 3, 5, 6, 1, 7, 8, 4};
    int size = sizeof(arr) / sizeof(int);
    int i;
    uniquenumber(arr, size);
    cout <<"all the unique number is :";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            cout<< arr[i]<<" ";
        }
    }

    return 0;
}