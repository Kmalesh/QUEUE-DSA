#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,21,3,5,3,5,8,9,3};
    int n = sizeof(arr) / sizeof(int);
    int target;
    cout << "Enter the target number:";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j]== target)
            {
              cout << "[" << i <<","<< j << ","<<"]";
            }
        }
    }


    return 0;
}