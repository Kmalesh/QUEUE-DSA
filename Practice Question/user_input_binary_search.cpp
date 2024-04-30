#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sort array:";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    int search, mid, lr = 0, up = n - 1, f = 0;
    cout << "Enter the search element:";
    cin >> search;
    while (lr <= up)
    {
        mid = (lr + up) / 2;
        if (arr[mid] == search)
        {
            f = 1;
            break;
        }
        if (arr[mid] < search)
        {
            lr = mid + 1;
        }
        else
        {
            up = mid - 1;
        }
    }
    if (f == 1)
    {
        cout << "element is found! index no :" << mid;
    }
    else
    {
        cout << "element is not found!";
    }
    return 0;
}
