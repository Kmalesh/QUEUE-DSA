#include <iostream>
using namespace std;
class airthmetic
{

    int a, b;

public:
    void getdata();             // public
    friend int sum(airthmetic); // friend function ko access lene ke liye public:section ka help liya
    friend int sum1(airthmetic);
    friend int sum2(airthmetic);
    friend int sum3(airthmetic);
};
void airthmetic::getdata() // for Examle
{
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
}
int sum(airthmetic op) // (op) same object aur same return type rahega .only operator hi change hogi
{
    int c = op.a + op.b;
    return c;
}
int sum1(airthmetic op) 
{
    int c = op.a - op.b;
    return c;
}
int sum2(airthmetic op) 
{
    int c = op.a * op.b;
    return c;
}
int sum3(airthmetic op) 
{
    int c = op.a / op.b;
    return c;
}
int main()
{
    airthmetic obj;
    obj.getdata();
    cout << "addition:" << sum(obj) << endl;
    cout << "subtraction:" << sum1(obj) << endl;
    cout << "multipal:" << sum2(obj) << endl;
    cout << "devision:" << sum3(obj) << endl;

    return 0;
}