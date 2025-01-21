#include <iostream>
using namespace std;
#define maxsize 3
int cq[maxsize];
int front = -1, rear = -1;
int main()
{                                                          //display Function is not complete

    int item, choice, i;
    cout << "[1].Insertion\n[2].Deletion\n[3].Display\n[4].Exit\n";
    while (1)
    {
        cout << "\nenter your choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if ((rear + 1) % maxsize==front)
            {
                cout << "cq is overflow!\n";
            }
            else
            {
                cout << "Enter the insert item:";
                cin >> item;
                if (front == -1 && rear == -1)
                {
                    front = rear = 0;
                }
                else
                {
                    rear = (rear + 1) % maxsize;       
                }
                cq[rear] = item;
                cout << "Item inserted!\n";
                
            }
           break; 
        case 2:
            if (front == -1 && rear == -1)
            {
                cout << "cq is Empty!\n";
            }
            else
            {
                item = cq[front];
                if (front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    front = (front + 1) % maxsize;
                }
                cout << "item Deleted!\n";
            }
            break;
        case 3:
            if (front == -1 && rear == -1)
            {
                cout << "cq is Empty!\n";                            
            }
            else
            {
                cout<<"Cq Element:";
                for (i = front; i != rear; ((i = i + 1) % maxsize))
                {
                    cout << cq[i] << " ";
                }
                cout << cq[i] << " ";// last Element print karane ke liye,
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}