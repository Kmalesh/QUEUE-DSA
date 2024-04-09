#include <iostream>
using namespace std;
int main()
{

    string name;
    cout << "enter your name:";
    cin >> name;
    int unit;
    cout << "Enter your unit:";
    cin >> unit;

if(unit<=100){
    cout<<name<<endl;
    cout<<unit<<endl;
    cout<<"Rupees of unit "<<unit<<" is "<<unit*1;
}
   
    // cout<<"enter unite :";
    // cin>>unite;
    // cout<<name;
    // if(100==1)
    // {
    //    cout<<"hh"<<endl;

    // }
}
// #include<iostream>
// using namespace std;
// int main()
// {
// int unit ,i,amount=1, c;
// char name  ;
// cout<<"\nenter value of electricity unit : ";
// cin>>unit;
// if( unit<=100)
// {
// amount=unit*1;
// cout<<"amount is: "<<amount;
// }

// if( unit>100&&unit<=300)
// {
// amount=100+((unit-100)*2);
// cout<<"amount is: "<<amount;
// }
// if( unit>300)
// {
// amount=500+((unit-300)*4);
// cout<<"amount is: "<<amount;
// }
// return 0;
// }