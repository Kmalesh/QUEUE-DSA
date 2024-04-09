#include <iostream>
using namespace std;
#define max_size 3
int queue[max_size];
int front = -1, rear = -1;
class Queue
{
public:
    int item, rear;
    void insertion()
    {
        if (rear == max_size - 1)
        {
            cout << "overflow & exit!";
        }
        else
        {
            cout << "enter the eleement for insert :";
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
    }
    void deletion()
    {
        if (front == -1)
        {
            cout << "overflow & exit!!\n";
        }
        else
        {
            item = queue[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front++;
            }
            cout << "item deleted!\n";
        }
    }
    void display()
    {
        cout << "Queue item:";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i];
        }
        cout << endl;
    }
    void Exit()
    {
        exit(0);
    }
};

int main()
{
    int item, choice;
    cout << "[1].Inqueue\n[2].Deletion\n[3].Display\n[4].exit\n";
    Queue obj;
    while (1)
    {

        cout << "enter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj.insertion();
            break;
        case 2:
            obj.deletion();
            break;
        case 3:
            obj.display();
            break;
        case 4:
            obj.Exit();
            break;
        default:
            cout << "invalid choice\n";
        }
    }
    return 0;
}