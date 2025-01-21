#include<iostream>
using namespace std;
class A{
    static int num;
    public:
    static int dis(){
        return num;
    }
};
int A ::num =6;
int main(){
cout<<A:: dis()<<endl;
return 0;
}