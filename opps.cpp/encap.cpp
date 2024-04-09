#include<iostream>
using namespace std;
class company
{
 
 string name;
 char batch;
 
 int age;
 public:
 string address;
  

 void input()
 {
    cout<<"enter your name: ";
    cin>>name;
    cout<<"batch no: ";
    cin>>batch;
    cout<<"enter age: "<<endl;
    cin>>age;
    cout<<" enter your address: ";
    cin>>address;
 }
 void show()
 {
   cout<<"*****************************"<<endl;
   cout<<"Employee information :-"<<endl;
    cout<<"name: ";
    cout<<name<<endl;

    cout<<"batch: ";
    cout<<batch<<endl;

    cout<<"age: ";
    cout<<age<<endl;

    cout<<"address: ";
    cout<<address<<endl;
    cout<<"****************************"<<endl;
    
 }

};
int main()
{
 
         //  company ajay, kamalesh, alok, jay;
company c;

    c.input();
    c.show(); 

   c.input();
   c. show();
   
   c.  input();
   c. show(); 

    


}