#include <iostream>
using namespace std;
int main() {
    int value = 10; // Original variable
    int &ref = value; // Reference variable

      cout << "Value: " << value <<endl;
      cout << "Reference: " << ref << endl;

    ref = 20; // Changing the reference variable

    cout << "After changing the reference:" <<endl;
    cout << "Value: " << value <<endl;
    cout << "Reference: " << ref << endl;

    return 0;
}