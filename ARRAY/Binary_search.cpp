

//NOT COMPLEATE PROGRAMM

#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {20, 21, 55, 65, 77,11};
    int item, lr = 0, up = 5, mid, f = 0;
     cout << "enter the search elelment:";
    cin >> item;
    while (lr<=up)
    {
       
        mid = (lr + up) / 2;
        if (arr[mid] == item)
        {
            f = 1;
            break;
        }
        else if (arr[mid] < item)
        {
            lr = mid + 1;
        }
        else
        {
            up = mid-1;
        }
    }
    if (f == 1)
    {
        cout << "item found index no:" << mid << endl;
    }
    else
    {
        cout << "element not found!";
    }
    return 0;
}