#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "enter the x:";
    cin >> x;
    int lastoccurance = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]!=x)
        {
            lastoccurance = i;
        }
    }
    cout << lastoccurance;
    return 0;
}