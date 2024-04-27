#include <iostream>
using namespace std;
class outerclass
{
public:
    string name;
    int rollno;
    void input() 
    {
        cout << "enter your name:";
        cin >> name;
        cout << "enter your roll no:";
        cin >> rollno;
    }
    void output()
    {

        cout << "name" << name << endl;
        cout << "rollno" << rollno << endl;
    }
    class nestetclass
    {
    public:
        int a = 10, b = 20;
        void sum()
        {
            cout << "a+b=" << a + b << endl;
        }
    };
};
int main()
{
    outerclass obj1;
     obj1.input();
     obj1.output();
     outerclass::nestetclass obj2; //calling to nestet class using scop esulation operator
     obj2.sum();
}
