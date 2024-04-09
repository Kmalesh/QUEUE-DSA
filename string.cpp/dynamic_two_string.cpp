#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    // char name[9];
    // char name_2[];
    
    string name;
    string name_2;
    cout<<"enter your first name:";
    getline(cin,name);
    cout<<" enter your last name:";
    getline(cin,name_2);
    name .append( name_2);
  //strcat(name,name_2);
    cout<< name;

}