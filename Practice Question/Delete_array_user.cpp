#include <iostream>
using namespace std;
int main()
{
    int n, pos;
    cout << "enter the size of nummbr:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the position of delete array:";
    cin >> pos;
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}