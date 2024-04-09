#include<iostream>
using namespace std;
class a
{
    public:
    int b,c;
   
    a(int x,int y)
    {
        b=x;
        c=y;
        cout<<b<<" "<<c;
        
    }
    
};
int main()
{
 a obj(10,20);
 return 0;
}