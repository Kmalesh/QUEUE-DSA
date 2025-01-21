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
    add b,c; //b is object
   int sum= b.addition(10,20);
   int sum1= c.addition(30,20);//call to method deffination withthe help of (.) operator
   cout<<"the sum is:"<<sum<<endl;
    cout<<"the sum is:"<<sum1;

    return 0;
}