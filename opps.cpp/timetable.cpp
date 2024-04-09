#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout << "please choose the time table in our sedule:sunday,monday,tuesday,wednesday,thirstday,friday ,saturday:\n";
    cin >> choice;

    if (choice == 's')
    {
        cout << "close deparment";
    }
    else if (choice == 'm')
    {
        cout << "first lecture---(8:50 to 9:50)--"
             << "cul/spo-001" << endl;
        cout << "second lecture---(9:50 to 10:50)--"
             << "cul/spo-001" << endl;
        cout << "third lecture---(10:50 to 11:50)--"
             << "BCA-201"
             << " ,room no-205"
             << " ,teacher name:navnit ma`am" << endl;
        cout << "furth lecture---(11:50 to 12:45)--"
             << "BHUM-013"
             << ",Room no-105"
             << "teacher name:babita maam" << endl;
        cout << "fifth lecture---(12:45 to 1:40)--"
             << "BCA-203"
             << " ,ROOM NO-105" << endl;
        cout << "sixth lecture---(1:40 to 2:35)--"
             << "BCA-202" << endl;
    }
    else if (choice == 't')
    {
        cout << "first lecture---(8:50 to 9:50)--"
             << "EnE-101"
             << " ,rom no-405" << endl;
        cout << "second lecture---(9:50 to 10:50)"
             << "BCA-202"
             << " ,Room no-303 agri" << endl;
        cout << "third lecture---(10:50 to 11:50)"
             << "BHUM-013"
             << " ,rom no-405" << endl;
        cout << "furth lecture---(11:50 to 12:45)"
             << "BCA-201"
             << " ,rom no-405" << endl;
        cout << "fifth lecture---(12:45 to 1:40)"
             << " BCA-203(T)GROUP-3"
             << " ,Room no-307" << endl;
        cout << "sixth lecture---(1:40 to 2:35)"
             << "BCA-204"
             << " class-C6" << endl;
    }
    else if (choice == 'w')
    {
        cout << "first lecture---(8:50 to 9:50)"
             << "BCA-205"
             << "room no-175 lab" << endl;
        cout << "second lecture---(9:50 to 10:50)"
             << "BCA-205"
             << " room no-175 lab" << endl;
        cout << "third lecture---(10:50 to 11:50)"
             << "BCA-206"
             << " Room no-205" << endl;
        cout << "furth lecture---(11:50 to 12:45)"
             << " BHUM-013"
             << " room no-303(agri)" << endl;
        cout << "fifth lecture---(12:45 to 1:40)"
             << "(BCA-203 , group-3, room no-307)"
             << "( BCA-204, group-1,  room no-C9)"
             << " (BCA-203(T), group-2,room no-307)" << endl;
        cout << "sixth lecture---(1:40 to 2:35)"
             << "BHUM-117"
             << "room no-250(E)" << endl;
    }
    else if (choice == 'T')
    {
        cout << "first lecture---(8:50 to 9:50)"
             << "BCA-203"
             << "room no-408" << endl;
        cout << "second lecture---(9:50 to 10:50)"
             << "BCA-201"
             << "room no-304" << endl;
        cout << "third lecture---(10:50 to 11:50)"
             << "BCA-202"
             << "room no-302(agri)" << endl;
        cout << "furth lecture---(11:50 to 12:45)"
             << "EnE-101"
             << "room no-302(agri)" << endl;
        cout << "fifth lecture---(12:45 to 1:40)"
             << "BCA-204"
             << "room no-175 lab" << endl;
        cout << "sixth lecture---(1:40 to 2:35)"
             << " BHUM-117"
             << " room no-250(E)" << endl;
    }
    else if (choice == 'f')
    {
        cout << "first lecture---(8:50 to 9:50)"
             << "BCA-201"
             << "room no-303(agri)" << endl;
        cout << "second lecture---(9:50 to 10:50)"
             << "BCA-202"
             << "room no-405" << endl;
        cout << "third lecture---(10:50 to 11:50)"
             << "EnE-101"
             << "room no-305" << endl;
        cout << "furth lecture---(11:50 to 12:45)"
             << "BCA-203"
             << "room no-204" << endl;
        cout << "fifth lecture---(12:45 to 1:40)"
             << "( BCA-203(T), group-1,  room no-408)"
             << " (BCA-204(T), group-3,room no-C8)" << endl;
        cout << "sixth lecture---(1:40 to 2:35)"
             << " BHUM-117"
             << " room no-250(E)" << endl;
    }

    return 0;
}