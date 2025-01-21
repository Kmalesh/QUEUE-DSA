#include <iostream>
using namespace std;
int main()
{

    int arr[] = {21,23,45,46,55,65,};

    int mid, lr = 0, up = 5, f = 0, search, i;
     cout << "enter the search element:";
    cin >> search;
    while (lr<=up)
    {
        mid = (lr + up) / 2;
        if (arr[mid] == search)
        {
            f = 1;
            break;
        }
       else if (arr[mid] < search)
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
        cout<<"searching found! index no: "<<mid<<endl;
    }
    else
    {
        cout << " searching not found!" << endl;
    }
}