#include <iostream>
using namespace std;

class operation
{
public:
    void airthmetic(int a, int b, int c)
    {
        cout << "add:" << a + b << endl;
    }
    void airthmetic()
    {
        int a = 10, b = 20;
        cout << "sub:" << a - b << endl;
    }
    void airthmetic(int a)
    {
        int b = 40;
        cout << "mal:" << a * b << endl;
    }
    void airthmetic(int a, int b)
    {

        cout << "dev:" << a / b << endl;
    }
};
int main()
{
    operation obj;
    obj.airthmetic(10, 20, 20);
    obj.airthmetic();
    obj.airthmetic(20);
    obj.airthmetic(100, 20);
}