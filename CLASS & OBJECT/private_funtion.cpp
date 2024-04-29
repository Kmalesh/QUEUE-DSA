#include <iostream>
using namespace std;
class studentinfo
{

    int age;

public:
    string name;
     void ttt(int a)
    {
        age=a;
        cout <<"age:"<< age<<endl;
    }

    void input()
    {
        name = "kamalesh";
        cout <<"name:"<< name<<endl;
    }
   
};
int main()
{
    studentinfo obj;
    obj.input();
    obj.ttt(10);
    return 0;
}
