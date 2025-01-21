#include <iostream>
using namespace std;
int number(int arr[], int size)
{
    int user;
    cout << "Enter the number:";
    cin >> user;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == user)
        {
            arr[i] = -1;
        }
        
        
    }
    return 0;
}
int main()
{
    int arr[] = {2, 2, 3, 3, 1};
    int size = sizeof(arr)/sizeof(int);
    number(arr, size);

    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            cout<<arr[i]<<" ";
            break;
        }
        break;
    }
}