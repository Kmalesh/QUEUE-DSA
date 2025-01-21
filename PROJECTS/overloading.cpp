#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"shahid\n";
    }
};
class B : public A
{
    public:
    void show(int a){
        cout<<"kamlesh Kumar";
    }
};
int main(){
    B o;
    o.show(2);
    o.A::show();
    
    // o.show();

    return 0;
}