#include <iostream>
using namespace std;
int main()
{
    int i;
    
    int arr[] = {21, 52, 8, 1};
    int n=sizeof(arr)/sizeof(int);
    int search, f = 0;
    cout << "enter the search element:";
    cin >> search;
    for (int i = 0;i<n;i++)
    {
        if (arr[i]==search)
        {
            f==1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"Searching successful!";
    }
    else 
    cout<<"Not element find";
    
}
