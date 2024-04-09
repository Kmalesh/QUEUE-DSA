#include<iostream>
using namespace std;
class add //class
{
    public://access specifire
  int addition(int a,int b)//method deffination
  {
    return a+b;
  }

};
int main()
{
    add b; //b is object
   int sum= b.addition(10,20);//call to method deffination withthe help of (.) operator
   cout<<"the sum is:"<<sum;

    return 0;
}