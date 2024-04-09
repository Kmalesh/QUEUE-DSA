#include<iostream>
using namespace std;
class abbu
{
    
    string surname="ansari";
};
class son_1:abbu
{
 string name="sahid";
 public:
 void k()
 {
    cout<<name<<" "<<surname<<endl;
 }
};
class son_2:abbu
{
 string name="rashid";
 public:
 void show()
 {
    cout<<name<<" "<<surname;

 }
};
int main()
{
    son_1 s1;
    s1.k();

    son_2 s2;
    s2.show();

}