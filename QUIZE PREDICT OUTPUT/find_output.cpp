#include<iostream>
using namespace std;
int main(){
    int x=3,y=4,z;

    z= ++x * y++;//  post increment me pahle multiply hoga yani y wala me
    cout<<z;

    return 0;
}