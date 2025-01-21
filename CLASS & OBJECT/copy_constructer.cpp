// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int a,b;
//     A(int x,int y)
//     {
//         a=x;
//         b=y;
//     }
//     A(A &s)
//     {
//         a=s.a;
//         b=s.b;
//     }
//     void show()
//     {
//         cout<<a<<" "<<b<<endl;
//     }
// };
// int main()
// {
//     A ob(10,20);
//     A ob2=ob;
//     ob.show();
//     ob2.show();


//     return 0;
// }

 #include<iostream>
using namespace std; 
class A
{
    public:
    int d,y;
    A(int a,int b)
    {
        
        d=a;
        y=b;
        
    }
    A(A &c)
    {
        cout<<c.d<<endl;
        cout<<c.y<<endl;
    }
};
int main()
{
    A d(10,20);
    A d1(d);
    return 0;
}