
#include<iostream>
using namespace std;
int main()
{
    int one,two,five,ten,twenty,fifty,hundred;
    int amount;
    cout<<"enter your amount:";
    cin>>amount;
    hundred=amount/100;
    amount=amount %100;
    fifty=amount/50;
    amount=amount%50;
    twenty=amount/20;
    amount=amount%20;
    ten=amount/10;
    amount=amount%10;
    five=amount/5;
    amount=amount%5;
    two=amount/2;
    amount=amount%2;
    one=amount/1;
    amount=amount%1;
    amount=one+two+five+ten+twenty+fifty+hundred;
    cout<<"total amount of notes is:"<<amount;

}