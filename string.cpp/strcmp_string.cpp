#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char name[]="kamalesh" ;
   char name2[]="kamalesh";
  int value= strcmp(name,name2);
  if(value==0)
  {
    cout<<"matches";
  }
  else{
    cout<<"not matches";
  }
   
}