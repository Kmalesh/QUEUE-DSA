#include <iostream>
using namespace std;
#define maxsize 3
int queue[maxsize];
int front = -1, rear = -1;
int main()
{
    int choice, item;
    cout << "****QUEUE****\n";
    cout << "[1].Insertion\n[2].Deletion\n[3].Display\n[4].Exit\n";
    while (1)
    {
        cout << "enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (front == maxsize - 1 && rear == maxsize - 1)
            {
                cout << "overflow and exit" << endl;
            }
            else
            {
                cout << "enter the item:";
                cin >> item;
                if (front == -1 && rear == -1)
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
        case 2:
            if (front == -1)
            {
                cout << "queue is underflow\n";
            }
            else
            {
                front++;
            }
           
            cout << "item deleted" << endl;
        }
    }
}