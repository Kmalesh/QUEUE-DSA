#include <iostream>
using namespace std;
struct node *head;
struct node
{
    int data;
    struct node *next;
};
void insert();
void Delete();
void display();

int main()
{
    int choice;
    cout << "\n--------LINKED LIST MENU-----------\n";
    cout << "[1].Insertion \n[2].Deletion\n[3].Display\n[4].Exit\n";
    while (1)
    {

        cout << "Enter the choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            display();
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
void insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        cout << "\noverflow & exit";
    }
    else
    {
        cout << "Enter the item:";
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        ptr = head;
        cout << "item inserted!\n";
    }
}

void Delete()
{
    int item;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (head == NULL)
    {
        cout << "data empty!\n" << endl;
    }
    else
        ptr->data = item;
    head = ptr->next;
    ptr = head;
    cout << "item is deleted!\n" << endl;
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Linked List is Empty!\n");
    }
    else
    {
        cout<<"\nLinked List Item:";
        while (ptr != NULL)
        {
            cout<<ptr->data;
            ptr = ptr->next;
        }
    }
}