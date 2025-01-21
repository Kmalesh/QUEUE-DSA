#include <iostream>
using namespace std;
void singlenumber(int arr[], int size)
{
    int i, num = 0;
    for (i = 0; i < size; i++)
    {
        num = num ^ arr[i];
    }
    cout << "sigle number:" << num;
}

int main()
{
    int arr[] = {2, 6, 2,5,5,6,9};
    int size = sizeof(arr) / sizeof(int);
    singlenumber(arr, size);

    return 0;
}