#include <iostream>
using namespace std;
#define max_size 3
int queue[max_size];
int front = -1, rear = -1;
int main()
{
    int choice;
    cout << "[1].Insertion\n[2].DEletion\n[3].Display\n[4].Exit\n";
    cout << "please Enter your choice:";
    cin >> choice;
    int item;
        switch (choice)
        {
        case 1:
            if (rear == max_size - 1)
            {
                cout << " Queue is overflow" << endl;
            }
            else
            {

                cout << "enter the item:";
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
                cout << "Item inserted!" << endl;
            }
            break;
        case 2:
            item = queue[front];
            if (front == -1)
            {
                cout << "queue is Underflow!" << endl;
            }
            else
            {
                if (front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    front++;
                }
                cout << "Item Deleted!" << endl;
            }
            break;
        case 3:
            if (front == -1)
            {
                cout << "Queue is Empty!" << endl;
            }
            else
            {
                cout << "queue Item:";
                for (int i = front; i < rear; i++)
                {
                    cout << queue[i] << " ";
                }
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    
    return 0;
}