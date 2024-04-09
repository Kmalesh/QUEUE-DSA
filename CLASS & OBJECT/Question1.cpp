#include <iostream>
using namespace std;

class b
{
    public:
    int a=10, b=20;
    void s1()
    {
        int sum=a+b;
        cout << "the sum is:"<<sum<<endl;
    }
    void s1(int a, int b)
    {
        int sub = a - b;
        cout << "the sum is :" << sub<<endl;
    }
};
int main()
{
   b obj;
   obj.s1(); // for additon
   obj.s1(10,20); // for subtraction
    
    return 0;
}
