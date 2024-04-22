#include<iostream>
using namespace std;
class add
{
    public:
     
     add(int a,int b)
    {
        cout<<"additon:"<<a+b<<endl;
    }
    
    //   add(int a,int b)
    // {
    //     cout<<"additon:"<<a-b<<endl;
    // }
    //   add(int a,int b)
    // {
    //     cout<<"additon:"<<a*b<<endl;
    // }
    //   add(int a,int b)
    // {
    //     cout<<"additon:"<<a/b<<endl;
    // }
    ~add()
    {
        cout<<"object distroyed"<<endl;
    }
    
};
int main()
{
    
    add a(20,10);
    add b(30,10);
    add c(60,10);
    add d(20,10);

    return 0;
}