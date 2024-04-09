#include <iostream>
using namespace std;
int main()

{
    int a, b, c;
    cout << "enter 1st number:";
    cin >> a;
    cout << "enter 2nd number:";
    cin >> b;
    cout << "enter 3rd number:";
    cin >> c;
    if (a+b>c and b+c>a and a+c>b)
    {
          cout<<"valid trangle";
    }
     else{
        cout<<"invalid trengel";
     }
     return 0;
}