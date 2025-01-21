#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 8; j >= 1; j--)
        {
            if (i >= j)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
          cout << endl;
    }
  
}