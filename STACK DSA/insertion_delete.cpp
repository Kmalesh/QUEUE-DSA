#include <iostream>
using namespace std;
  #define max_size 3
    int stack[max_size];
    int top = -1, last = -1;

int main()
{
  
    int item, choice;
    cout << "[1].push\n[2].display\n[3].exit\n[4].pop\n";
    while (1)
    {
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (last == max_size - 1)
            {
                cout << "overflow & exit!!\n";
            }
            else
            {
                cout << "enter the item for insert :";
                cin >> item;
                if (top== -1)
                {
                    top = last = 0;
                }
                else
                {
                    last++;
                }
                stack[last] = item;
                cout << "item inserted!\n";
            }
            break;
        case 2:
            if (top == -1)
            {
                cout << "queue is empty!\n";
            }
            else
            {
                cout << "queue item is :";
                for (int i=top; i<=last; i++)
                {
                    cout<<stack[i]<<" ";
                }
                cout << endl;
            }
            break;
        case 4:
            if (top == -1)
            {
                cout << "underflow & exit!!\n";
            }
            else
            {
                item = stack[top];//queue ke item ko set karenge
                if (top == last)
                {
                    top= last = -1;
                }
                else
                {
                 last--;
                }
                cout << "item deleted!!\n";
            }
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "invalid choice\n";
        }
    }
}
