#include<iostream>
using namespace std;
class parents
{
    protected:
    string surname="kumar";
    
};
class son:parents
{
   public:
   string name="kamalesh ";
   void display()
   {
    cout<<name<<" "<<surname;
   }
    
};
int main()
{
    son o;
    o.display();
    
 
    return 0;
}