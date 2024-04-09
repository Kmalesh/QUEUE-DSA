#include <iostream>
using namespace std;
#define max_size 5
int stack[max_size];
int top = -1;
void push(int item)
{
    if (top == max_size - 1)
    {
        cout << "overflow & exit " << endl;
    }
    else
    {
        stack[top = top + 1] = item;
        cout << "item inserted." << item<<endl;
    }
    cout<<endl;
}
void pop()
{
    if (top == -1)
    {
        cout << "unflow & exit" << endl;
    }
    else
    {
        int item = stack[top--];
        cout << "item deleted." << item << endl;
    }
}
void display()
{
    if (top == -1)
    {
        cout <<"the stack is empty."<<endl;
    }
    else
    {
        cout << "stack element.";
        for (int i=0; i<=top; i++)
        {
            cout << stack [i]<<" ";
        }
        cout <<endl;
    }
}

int main()
{
    int item, choice;
    cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.display"<<endl<<"4.exit";
    

    while (1)
    {
        cout << "enter the choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter the value to push:";
            cin >> item;
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            cout << "invalid choice" << endl;
        }
    }
    return 0;
}