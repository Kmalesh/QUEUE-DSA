#include <iostream>
using namespace std;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }
    int mul(int a, int b)
    {
        return a * b;
    }
    int divi(int a, int b)
    {
        return a / b;
    }
    int modulo(int a, int b)
    {
        return a % b;
    }

};

int main()
{
    // while (1)
    
        int a, b, choice;
        cout << "enter the first number:";
        cin >> a;
        cout << "enter the second number :";
        cin >> b;
        cout << "[1].addition\n[2].subtraction\n[3.]multipication\n[4].division\n[5].modulo find\n[6].exit\n";
        cout << "enter your choice:\n";
        cin >> choice;
        
        calculator h; // h is object 
        switch (choice)
        {
        case 1:
            if (choice == 1)
            {
                int v = h.add(a, b);
                cout << v<<endl;
                break;
            }
        case 2:
            if (choice == 2)
            {
                int b = h.sub(a, b);
                cout << b<<endl;
                break;
            }
        case 3:
            if (choice == 3)
            {
                int g = h.mul(a, b);
                cout << g<<endl;
                break;
            }
        case 4:
            if (choice == 4)
            {
                int s = h.divi(a, b);
                cout << s<<endl;
                break;
            }
        case 5:
            if (choice == 5)
            {
                int x = h.modulo(a, b);
                cout << x<<endl;
                break;
            }
        case 6:
            if (choice == 6)
            {
                cout<<"exit";
                break;
                default:
                cout<<"calculator off";
                // break;
            }
        }
    
    return 0;
}