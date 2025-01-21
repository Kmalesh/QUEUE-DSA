#include <iostream>
using namespace std;
int main()
{
    int n, i, pos;
    cout << "Enter the size of Memory:";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Delete position :";
    cin >> pos;

    for (i=pos;i<n;i++)
    {
        arr[i]=arr[i + 1];
    }
    for (i = 0; i < n - 1; i++)//if -1 nahi rahega to garbage value print hoga
    {
        cout << arr[i] << "\n";
    }
}
