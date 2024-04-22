#include <iostream>
using namespace std;
class name
{
public:
   name()
   {
      string name = "kamalesh kumar";
      cout << name << endl;
      int rollno = {1323407};
      cout << rollno << endl;
   }
   ~name()
   {
      cout << "object distroyed!";
   }
};
int main()
{
   name x;
   return 0;
}