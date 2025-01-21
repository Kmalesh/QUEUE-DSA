#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n number:";
    cin>>n;
      int sum=0;

    for (int i=0;i<=n;i++)
    {
        sum += i;
    }
    cout << "all the number of sum:" <<sum;

    return 0;
}