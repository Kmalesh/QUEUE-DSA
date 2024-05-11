#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    system("cls");
    int a, b, c;
    cout << "enter the number :";
    cin >> a >> b;
    try
    {
        if (b != 0) // if b=0 hai then throw B;
        {
             c = a / b;
            cout << "devision:" << c;
        }
        
        else
        {
            throw b;
        }
    }

    catch (int b)
    {
        cout << "devision:" << b; // it block hendling of try block
    }

    return 0;
}
