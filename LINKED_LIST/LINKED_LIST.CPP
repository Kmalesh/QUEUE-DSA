#include <iostream>
using namespace std;
struct node *head;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *ptr;               //NOT COMPLETE
    int item;
    
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        cout<<"overflow & exit";
    }
    else{
        cout<<"Enter the item:";
        cin>>item;
        ptr->data=item;
        ptr->next=head;
        ptr=head;
        cout<<"item inserted in begning !";
    }

    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(head==NULL )
    {
        cout<<"data empty!"<<endl;
    }
    else
    ptr->data=item;
    head=ptr->next;
    ptr=head;
    cout<<"item is deleted from begning !"<<endl;
    
}