#include <iostream>
using namespace std;
template <class T>
T show(T a ,T b)
{
    cout << a+b ;
}
int main()
{
    show(10,5);

    show(10.2,2.3);

    return 0;
}