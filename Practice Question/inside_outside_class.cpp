#include<iostream>
using namespace std;
class classname
{
    public :
    void insidefunction()
    {
        cout<<"Inside class\n";
    }
 //not complete 
    void outside();
    
};
 void classname:: outside()
{
        cout<<"outside class";
}


int main()
{
    classname c;
    c.insidefunction();
    c.outside();
    return 0;
}