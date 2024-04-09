#include<iostream>
using namespace std ;
int x=20; //globle define
int main()
{
    int y=10; //local value
    cout<<"globle value:"<<::x<<endl;
    cout<<"local value:"<<y;
    return 0;
}
