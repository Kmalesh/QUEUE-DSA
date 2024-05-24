#include<iostream>
using namespace std;
template <class T> 
T sum(T a,T b)
{
    cout<<"Two number add is :"<<a+b;
}
template <class T>
int main()
{     
    sum(10,20);
    sum(20.1,55.0);
}