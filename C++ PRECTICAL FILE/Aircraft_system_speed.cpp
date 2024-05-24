#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout << "check speeds of Aircreft :";
    cin >> speed;

    
        switch (speed)
        {
        case 100:

            cout << "Normal speed Range" << endl;
        break;

    case 101:

        cout << "Over speed Warning!" << endl;
        break;

    case 88:

        cout << "Low Oil Pressure" << endl;
        break;
    case 187:

        cout << "Engine Failure!" << endl;
        break;
    default:
        cout << "hhh";
        break;
    }
}