#include <iostream>
using namespace std;
int main()
{
    int n, i = 2,prime=true;  
    cout << "Enter the N number:";
    cin >> n;
    while (i < n - 1)
    {
        if (n % i == 0)
        {
            prime=false;
            break;
        }
    }
if(prime==true)
{
    cout<<"prime number"<<endl;
}
else{
    cout<<"not prime number";
}
    return 0;
}