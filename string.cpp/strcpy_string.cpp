#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[]="kamalesh kumar";  // using strcpy =copy of name into name_2
    char name_2[18];
    strcpy(name_2,name);
    cout<<"copy name:"<<name_2<<endl;
    cout<<"*********************"<<endl;


   int lenth= strlen(name_2);  //find lenth of name using strlen;
   cout<<"lenth of name_2: "<<lenth<<endl;

   cout<<"*************************"<<endl;

   cout<<"reverse name: "<<strrev(name_2)<<endl;//reverse name print using strrev function;

   





}  
    