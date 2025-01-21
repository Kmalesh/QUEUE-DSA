#include<iostream>
using namespace std;
class house
{
    private:
    int a=10,b=5;

    friend int brother(house s);//not member of class

};
int brother(house s)
{
    int c=s.a;
    return c;
}
int main(){
house b;  //class name ka koi bhi object bna sakte hai, aur use brother fu.store kara sakte hai
cout<<" addition is:";
cout<<brother(b);
return 0;
}