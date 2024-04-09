#include<iostream>
using namespace std;
class person
{
     int age;
    string name;
    string address;
    public:


void input()
{
    cout<<"enter age:"<<endl;
    cin>>age;

    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"enter address:"<<endl;
    cin>>address;
}
void show()
{
    cout<<"age"; 
    cout<<age<<endl;

    cout<<"name";
    cout<<name <<endl;

    cout<<"address";
    cout<<address<<endl;
}
    
};
   
int main()
{
    person kamalesh,alok, jay;
    kamalesh.input();
    kamalesh.show();

    alok.input();
    alok.show();

    jay.input();
    jay.show();
  


 
}