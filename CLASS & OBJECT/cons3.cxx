#include<iostream>
using namespace std;
class b
{
    public:

    b(int y,int z) //parameterized constructor
    {
        
    }
    ~b()//desconstructor
    {
       cout<<"distroyed object";
    
    }
};
int main()
{
    b (10,20);
    return 0;
}