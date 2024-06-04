#include <iostream>
using namespace std;

int main()
{
    int arr[] = {
        10,
        30,
        40,
        60,
        80,
        90,
    };
    int mid, lr = 0, up = 6, search, f = 0;
    cout << "Enter the search Element:";
    cin >> search;
    while (lr < up)
    {
        for (int i = 0; i < 6; i++)
        {

            mid = (lr + up) / 2;
            if (arr[mid] == search)
            {
                f = 1;
                break;
            }
            if(arr[mid]<search) 
            {
              lr=mid+1;
            }
            else{
                up=mid-1;
            }
        }
    }
   if(f==1)
   {
    cout<<arr[mid]<<" Element is founnd Index no:"<<mid;
   }
   else {
    cout<<"element is not found!";
   }
    return 0;
}
