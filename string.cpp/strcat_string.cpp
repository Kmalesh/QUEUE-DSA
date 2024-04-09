#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    // char name[]="kumar";
    // char name_2[]="kamalesh ";
    // strcat(name_2 ,name); 
    // cout<<name_2;
    
     string name="kamalesh";
    string name_2=" kumar ";
    name.append(name_2);
    cout<<name;

}