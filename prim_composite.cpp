

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (1)
    {

        cout << "enter the number:\n";
        cin >> n;
        bool flag = true;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (n == 1)
            cout << "neither prime nor compositive";
        else if (flag = false)
            cout << "prime number";
        else
            cout << "composite number\n";
            
    }
}