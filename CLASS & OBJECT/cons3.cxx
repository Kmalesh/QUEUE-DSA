#include<iostream>
using namespace std;
class b
{
    int a,B;
    public:
  b() //constructure
  {
    a=12,B=6;
    cout<< a+B<<endl;
  }
    b(int y,int z) //parameterized constructor
    {
         cout<<y+z<<"\n";
       
    }
    ~b()//desconstructor
    {
       cout<<"distroyed object\n";
    
    }
};
int main()
{
    b (10,20);
    return 0;
}