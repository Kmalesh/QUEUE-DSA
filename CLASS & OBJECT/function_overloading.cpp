#include<iostream>
using namespace std;
int student(int a,int b)
{
    return a+b;
}  
void student()
{
    int a=10,b=23;
    cout<<a+b<<endl;
} 
int main()
{ 
    student();
   cout<<student(10,20);
return 0;
}
    