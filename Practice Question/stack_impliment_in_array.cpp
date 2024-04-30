#include <iostream>
using namespace std;
#define max_size 4
int stack[max_size];
int top = -1;
int main()
{
    int item, choice;

    cout << "1.[push]\n2.[pop]\n3.[display]\n4.[Exit]\n";
    while (1)
    {
        cout << "Please enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (top == max_size - 1)
            {
                cout << "stack is overflow!" << endl;
            }
            else
            {
                cout << "enter the number:";
                cin >> item;
                top++;
                stack[top] = item;
                cout << "item inserted!" << endl;
            }
            break;
        case 2:
            if (top == -1)
            {
                cout << "stack is empty!";
            }
            else
            {
                item = stack[top];
                top--;
                cout << "Item deleted!" << endl;
            }
            break;
        case 3:
            if (top == -1)
            {
                cout << "stack underflow!" << endl;
            }
            else
            {
                cout << "stack item:";
                for (int i = 0; i <= top; i++)
                {
                    cout << stack[i] << " ";
                }
                cout << endl;
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "invalid choice!" << endl;
        }
    }
}
