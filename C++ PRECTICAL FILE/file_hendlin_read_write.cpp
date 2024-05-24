#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char name[50];
   fstream fout("d://new folder (3)/student.txt",ios::app);//to write the data
   fout<<"RadheRadhe";
   cout<<"file created";

   fstream fin("d://new folder (3)/student.txt",ios::in);//to read the data
   fin>>name;
   cout<<endl;
   cout<<name;
   return 0;
   

}
