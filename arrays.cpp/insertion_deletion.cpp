
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node *head;
struct node
{
    int data;
    struct node *next;
};
void insert();
void display();
void Delete();
int main()
{
    while (1)    
    {
        cout << "1.insertion\n2.display\n3.exit\n4.Delete\n";
        int choice;
        cout << "enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 4:
            Delete();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "invalid choice:";
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
        cout << "overflow" << endl;
    }
    else
    {
        cout << "enter the value:" << endl;
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "item inserted" << endl;
             
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "nothing to print";
    }
    else
    {

        cout << "printing value while ( ptr!=null).\n";
        while (ptr != NULL)
        {

            cout << ptr->data;
            ptr = ptr->next;
        }
    }
}
void Delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        
        cout<<"list is empty\n";
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        
        cout<<"item Deleted from begining"; 
    }
}
