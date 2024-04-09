// #include<iostream>
// using namespace std;
// int main()
// {
//     char choice;
//     cout<<"enter your choice:";
//     cin>>choice;
//     cout<<(int)choice;//intiger to choice typr casting 
// }
#include<iostream>
using namespace std;
 main()
{
    int x;
    cout<<"enter your number:";
    cin>>x;
    char ch=(char)x;//type casting//character to integer
    cout<<"Ascii value of "<<x<<" = "<<ch;

}
