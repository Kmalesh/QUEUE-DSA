#include <iostream>
using namespace std;
class airthmetic
{
public:
    int a, b;
    void input()
    {
        cout << "enter the first number:";
        cin >> a;
        cout << "enter the second number:";
        cin >> b;
    }
    void display()
    {
        cout << "addition:" << a + b << endl;
        cout << "subtrection:" << a - b << endl;
        cout << "mulpli:" << a * b << endl;
        cout << "division:" << a / b << endl;
    }

    class info
    {
    public:
        string name;
        int rollno;
        string branch;

        void input()
        {
            cout << "enter you name:";
            cin >> name;
            cout << "enter your rollno:";
            cin >> rollno;
            cout << "enter your branch:";
            cin >> branch;
        }

        void display()
        {
            cout << "name:" << name << endl;
            cout << "rollno:" << rollno << endl;
            cout << "branch:" << branch << endl;
        }
    };
};

int main()
{
    airthmetic obj;
    obj.input();
    obj.display();
    airthmetic::info obj1;
    obj1.input();
    obj1.display();


    return 0;
}