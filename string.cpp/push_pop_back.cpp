#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name="kamalesh";
    cout<<"original name:" <<name<<endl;
    name.push_back('s');//koi new character add karega 
    cout<<"modifie name:"<<name <<endl;
    name.pop_back();
    cout<<"delete modifie character :"<<name<<endl;//new wala add character delete ho jayega;


}