#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter your choice:";
    cin>>ch;
    (ch=='a'||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')) ? cout<<"vowel " : cout<<"consonant";

}