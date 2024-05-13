#include <iostream>
using namespace std;
class A
{
 public:
    virtual void show()
    {
        cout << "base class show\n";
    }
};
class B : public A
{
    void show()
    {
        cout << "derived class show\n";
    }
};
int main()
{
    A *p;  //base 
    B obj; //jis class ka object hoga ,object usi ko call karega
    p = &obj;
    p->show();

    return 0;
}
