#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of memory:";
    cin >> n;
    int arr[n];
    cout << "Enter  the array element:";
    for (int i = 0; i < n; i++)
    {
            cin >> arr[i];
    }

   cout<<"the number is:";
    for (int i = 0; i < n; i++)
    {
            cout<<arr[i]<<" "<<endl;
        
    }

    int x;
    // int pairs=0;
    cout << "Enter the X element:";
    cin >> x;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            for(int k=j+1;k<n;k++)
            {
                 if(arr[i]+arr[j]+arr[k] == x)
            {
                cout<<" "<<i<<j<<" ";
                // pairs++;
            }
            }
            
        }
    }
    // cout<<"pairs:"<<pairs;

 

}