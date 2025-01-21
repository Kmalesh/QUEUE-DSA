#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the memory size:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int search,f=0,i;
    cout<<"Enter the search element:";
    cin>>search;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            f=1;
            break;
        }
    }
     if(f==1)
     {
        cout<<"the search element is index no "<<i<<endl;
     }
     else{
        cout<<"Element is not found";
     }
    return 0;
}