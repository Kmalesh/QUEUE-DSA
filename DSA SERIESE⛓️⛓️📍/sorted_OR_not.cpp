// #include <iostream>
// using namespace std;
// void sortedornot(int arr[], int size)
// {
//     int temp;
//     for (int i = 0; i < size; i++)
//     {
//         // for (int j = i + 1; j < size; j++)
//         // {
//         if (arr[i] < arr[i + 1])
//         {
//            temp=arr[i];
//         }
//         // }
//     }
//     cout<<"sortest";
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(int);
//     sortedornot(arr, size);
// }


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (is_sorted(arr, arr +n)) {
        cout << "Array sorted" <<endl;
    } else {
        cout << " NOT sorted  " <<endl;
    }

    return 0;
}