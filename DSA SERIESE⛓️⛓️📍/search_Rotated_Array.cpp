#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
    int st = 0, end = 7, tar = 0;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == tar)
        {
           cout<<" element is find"<<endl;
        }
        if (arr[st] <= arr[mid]) // left sorted
        {
            if (arr[st] == tar && tar == arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;                //not sumited on leet code
            }
        }
        if (arr[end] <= arr[mid])
        {
            if (arr[end] == tar && tar == arr[mid])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return 0;
}
