#include <iostream>
using namespace std;
int addition(int a, int b)
{
    return a + b;
}
int subtraction(int a, int b)
{
    return a - b;
}
int multipication(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;
    int choice;
    for (int i = 1; i <= 5; i++)
    {

        cout << "enter the first number:";
        cin >> a;
        cout << "enter the second number:";
        cin >> b;
        cout << "1.addition\n2.subtrection\n3.multipication\n4.division\n.5.for continue\n6.exit\n";
        cout << "please choose your choice:";
        cin >> choice;
        continue;

        switch (choice)
        {
        case 1:
            if (choice == 1)
            {
                int add = addition(a, b);
                cout << "the sum of two number " << a << " and " << b << " is:" << add;
                break;
            }
        case 2:
            if (choice == 2)
            {
                int sub = subtraction(a, b);
                cout << "the sub of two number" << a << " and " << b << "is:" << sub;
                break;
            }
        case 3:
            if (choice == 3)
            {
                int mul = multipication(a, b);
                cout << "the multiple of two number" << a << " and " << b << "is:" << mul;
                break;
            }
        case 4:
            if (choice == 4)
            {
                int div = division(a, b);
                cout << "the div of two number" << a << " and " << b << "is:" << div;
                break;
            }

        case 5:
            if (choice == 5)
            {
                cout << "exit";
                break;

            default:
                cout << "calculator off";
                break;
            }
        }
        
    }

    return 0;
}