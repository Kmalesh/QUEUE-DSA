#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name="kamalesh";
    cout<<"name of son:"<<name<<endl;
    name.push_back('s');
    cout<<name<<endl;;
    name.pop_back();
    cout<<name;

}
