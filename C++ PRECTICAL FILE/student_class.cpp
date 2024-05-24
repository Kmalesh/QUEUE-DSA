#include <iostream>
using namespace std;
class student
{
public:
      string name = "kamalesh kumar";
        double roll_no = 1323407;
        string dep = "BCA";
    void display()
    {
         cout<<"name:"<<name<<endl;
         cout<<"Roll no:"<<roll_no<<endl;
         cout<<"Department:"<<dep<<endl;
    }

};
class test : public student
{
public:
    void display()
    {
        cout << "student passed\n";
    }
};
int main()
{
    student obj;
    obj.display();
        
}