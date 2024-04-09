#include <iostream>
using namespace std;
  #define max_size 3
    int queue[max_size];
    int front = -1, rear = -1;

int main()
{
  
    int item, choice;
    cout << "[1].Inqueue\n[2].display\n[3].exit\n[4].Dqueue\n";
    while (1)
    {
        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (rear == max_size - 1)
            {
                cout << "overflow & exit!!\n";
            }
            else
            {
                cout << "enter the item for insert :";
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
                cout << "item inserted!\n";
            }
            break;
        case 2:
            if (front == -1)
            {
                cout << "queue is empty!\n";
            }
            else
            {
                cout << "queue item is :";
                for (int i=front; i<=rear; i++)
                {
                    cout<<queue[i]<<" ";
                }
                cout << endl;
            }
            break;
        case 4:
            if (front == -1)
            {
                cout << "underflow & exit!!\n";
            }
            else
            {
                item = queue[front];//queue ke item ko set karenge
                if (front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                 rear--;
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
