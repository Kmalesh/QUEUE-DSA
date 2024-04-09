#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[20];
    cout<<"enter your full name:";
    gets(name);         //cin likhne se pura name nahi likha payega.for kamalesh ke sath kumar nahi hoga ;
    puts(name);  // pure character ko print karega :

    char address[30];
    cout<<"enter your full address:";
    gets(address); // for input
    puts(address);//for print



}