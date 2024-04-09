// #include<iostream>
// using namespace std;
// int main()
// {
//     int b;
//     cout<<"enter the number :";
//     cin>>b;
//     //there are two types of comment(1.)single line comments
//    /*multiple line comment. it is not exicute only used for understanding code*/
//      if(b%2==0)
//     {
//         cout<<"even number";
//     }
//     else
//     cout<<"odd number";
    
//}
// #include<iostream>
// using namespace std;
// int main() {
// // Variable definition with initialization
// int m = 5;
// // Variable declaration without initialization
// int y;
// // Multiple variable definitions
// int a, b = 8, c = 10;
// cout << "c= " << c <<endl;
// cout << "b= " << b <<endl;
// return 0;
// }

#include<iostream>
using namespace std;
void swapcallbyadd(int& a, int& b)
{
 int temp=a;
 a=b;
 b=temp;
}
void swapcallbyref(int* a, int* b)
{
    int c = *a;
    *a=*b;
    *b=c;
}
int main()
{
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"before swapping"<<" a = "<<a<<" and "<<" b = "<<b<<endl;
    swapcallbyref(&a,&b);
    cout<<"after swapping"<<" a = "<<a<<" and "<<" b = "<<b<<endl;
    swapcallbyadd(a, b);
    cout<<"after swapping"<<" a = "<<b<<" and "<<" b = "<<a<<endl;

      return 0;
    }
