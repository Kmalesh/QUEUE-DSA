#include <iostream>
using namespace std;
int main()
{
    int size, i, search;
    cout << "enter the size of memory ";
    cin >> size;
    int arr[size];
    cout << "enter the element";
    
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the search element:";
    cin >> search;

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t " << endl;

        if (arr[i] == search)
        {
            cout << "searching successfull!";
            break;
        }
  
    }
      if(arr[i]!=search)
        {
            cout << "element not found";
        }
    return 0;
}
