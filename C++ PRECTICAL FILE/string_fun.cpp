#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[]="RADHE"; 
    char name_2[18];
    strcpy(name_2,name);
    cout<<"copy name:"<<name_2<<endl;
    
   int lenth= strlen(name_2);  
   cout<<"lenth of name_2: "<<lenth<<endl;

   cout<<"reverse name: "<<strrev(name_2)<<endl; 

 cout<<"name:"<<strlwr(name);  

}  
