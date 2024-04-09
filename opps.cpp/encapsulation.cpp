#include<iostream>
using namespace std;
class encap
{
    
     /*private always be silent*/
    int age; /*above public is called private */
   public:
    string name;
    
    string address;

    // void  setvalue(int a) /* creat function for access in private data*/
    // {
    //     age=a;
    //     cout<<age<<endl;
    // }
     
            //   encapsulation is used for hide and secure our data.

};
int main()
{
    encap l;
    
    l.name="kamalesh";
    l.address="dhangaraha";
    l.age=18;

    // l.setvalue(23);
    cout<<l.name<<endl;
    cout<<l.address;

}