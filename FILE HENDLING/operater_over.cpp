#include <iostream>
using namespace std;
class sum
{
public:
    int a, b;
    void A(int m, int n)
    {
        a = m;
        b = n;
    }
    void display()
    {
        cout << a << endl;
        cout << b << endl;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }
};
int main()
{
    sum b;
    b.A(10,20);
    -b;
    b.display();
    return 0;
}