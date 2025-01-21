#include <iostream>
using namespace std;
int main()
{
    int n, i, j, target;
    cout << "enter the n munber:";
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target element:";
    cin >> target;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
           if(arr[i]+arr[j]==target)
           {
            cout<<"["<<i<<"]"<<"["<<j<<"]";
           }
            
        }
    }
}
