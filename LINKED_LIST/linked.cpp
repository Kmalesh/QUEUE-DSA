#include<iostream>
using namespace std;
struct node *head;
struct node
{
   int data ;
   struct node *next;   // NOT COMPLETE........................
};
int main()
{
    int choice;
     
    cout<<"1.insert begining \n2.delete end\n";
    cout<<"please enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
       int item,*ptr;
        ptr=(struct node*)malloc(sizeof(struct node));
    }
}
