#include <iostream>
using namespace std;

class b
{
    public:
    int a=30, b=20;
    void s1()
    {
        cout << a + b<<endl;
    }
    
    void s1(int a, int b)
    {
        int sub = a - b;
        cout << "the sum is :" << sub;
    }
};
int main()
{
   b obj;
   obj.s1(); // for additon
   obj.s1(10,20); // for subtraction
    
    return 0;
}
