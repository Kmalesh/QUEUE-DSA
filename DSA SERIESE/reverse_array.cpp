#include <iostream>
using namespace std;
int reverse(int arr[], int size)
{
     int start=0,end=size-1;
     while(start < end)
     {
      swap(arr[start],arr[end]);
      start++;
      end--;
     }

     return 0;
}

int main()
{
    int arr[] = {2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    reverse(arr, size);
    for (int i = 0; i<size; i++)
    {
        cout <<arr[i] << " ";
    }
    return 0;
}