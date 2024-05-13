#include <iostream>
using namespace std;
#define max_size 4
int queue[max_size];
int front = -1, rear = -1;
int main()
{
    int choice, item;
    cout << "[1].Insert at Rear\n[2].Insert at Front\n[3].Delete from Rear\n[4].Delete from Front\n[5].Display\n[6].Exit\n ";
    cout << "Enter your choice:";
    while (1)
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (rear == max_size - 1)
            {
                cout << "Queue  isoverflow!" << endl;
            }
            else
            {
                cout << "Enter the number :";
                cin >> item;
                if (front == -1)
                {
                    front = rear = 0;
                }
                else
                {
                    rear++;
                }
                queue[rear] = item;
                cout << "Item Inserted!\n";
            }
        case 2:
            if (rear == max_size - 1)
            {
                cout << "Queue is FULL!" << endl;
            }
            else
            {
                cout << "Enter the item:";
                cin >> item;
                if (front == -1)
                {
                    front = rear = 0;
                }
                else
                {
                    if (front == 0)
                    {
                        front = max_size - 1;
                    }
                    else
                    {
                        front = front - 1;
                    }
                    queue[front] = item;
                    cout << "Item Inserted at front!!" << endl;
                }
            }
        }
    }
    return 0;
}