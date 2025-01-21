#include <iostream>
using namespace std;
void lastoccer(int arr[], int size)
{
  int occer, i, j, lastoccerance = -1;
  cout << "Enter the occerance number:";
  cin >> occer;
  for (i = 0; i < size; i++)
  {
    if (arr[i] == occer)
    {
      lastoccerance = i;
    }
  }
  if (lastoccerance != -1)
  {
    cout << "lastoccerance no " << occer << " and index no is :" << lastoccerance;
  }
}
int main()
{
  int arr[] = {2, 4, 3, 4, 5, 3};
  int size = sizeof(arr) / sizeof(int);
  lastoccer(arr, size);

  return 0;
}
