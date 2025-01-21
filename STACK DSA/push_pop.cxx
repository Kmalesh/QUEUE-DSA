#include <iostream>
using namespace std;
#define max_size 4
int stack[max_size];
int top = -1;
int main()
{
    cout << "[1].PUSH\n[2].POP\n[3].DISPLAY\n[4].exit\n";
    int item, choice;
    while (1)
    {
        cout << "enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (top == max_size - 1)
            {
                cout <<"overflow & exit\n";
            }
            else
            {
                cout << "enter the item for insert:";
                cin >> item;
                top++;
                stack[top] = item;
                cout << "item inserted!"<< endl;
            }
            break;
        case 2:
            if (top == -1)
            {
                cout << "underflow & exit\n";
            }
            else
            {
                top--;
                 item=stack[top];
                 cout << "item deleted!\n";
                 
            }
           
            break;
        case 3:
            if (top == -1)
            {
                cout << "stack empty!\n";
            }
            else
            {
                cout << "stack item:";
                for (int i=0; i<=top; i++)
                {
                 cout<<stack[i]<<" ";
                }
                cout << endl;
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "invalid choice!\n";
        }
    }
 return 0;   
}