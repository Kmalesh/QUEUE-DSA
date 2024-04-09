#include<iostream>
using namespace std;
class student
{    public:
    void name()
    {
        cout<<"information of student"<<endl;
       string name="kamalesh";

       int rollno = 1323407;
       
       float marks=98;
         cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"marks:"<<marks;
    }
};
int main()
{
    student info;
  info.name();
  
    return 0;
}