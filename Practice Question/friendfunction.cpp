#include<iostream>
using namespace std;
class A{
    int a=10;
    int b=10;
    friend void dis(A c);
};
 void dis(A c){
 cout<<c.a<<endl<<c.b<<endl;
 return ;
}
int main(){
A n;
dis(n);
return 0;
}