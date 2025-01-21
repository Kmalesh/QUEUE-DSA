#include <iostream>
using namespace std;
int largestelement(int arr[], int size)
{

    int max = 0;
    int secondindx = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max = i;                               
        }
    }
    return secondindx;
}


int main()
{
    int arr[] = {21, 3, 43, 54, 53, 23, 65, 33};
    int n = largestelement(arr, 8);
    cout << "largest number:" << n<<"\n";
    arr[n]=-1;
    int v=largestelement(arr, 8);
    cout<<v;

}