#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int units;
    float totalCharges = 0;
    cout << "Enter the number of user name: ";
    int numUsers;
    cin >> numUsers;
    for (int i = 0; i < numUsers; ++i) {
        cout << "Enter the name of user " << i+1 << ": ";
        cin >> name;
        cout << "Enter the number of units consumed by " << name << ": ";
        cin >> units;
        float charges = 0;
        if (units <= 100) {
            charges = units * 1;
        } else if (units <= 300) {
            charges = 100 * 1 + (units - 100) * 2;
        } else {
            charges = 100 * 1 + 200 * 2 + (units - 300) * 4;
        }
        if (charges < 500) {
            charges = 500;
        }
        
        if (charges > 5000) {
            charges += charges * 0.15; 
        }
     cout << "Total charges for " << name << ": Rs. " << charges << endl;

        totalCharges += charges;
    }
    cout << "Total charges for all users: Rs. " << totalCharges << endl;

}