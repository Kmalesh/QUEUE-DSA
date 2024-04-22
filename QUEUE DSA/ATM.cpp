#include <iostream>
#include <string.h>
using namespace std;
#define limitation 4
int atm[limitation];
int space_1 = -1, space_2 = -1;
int main()
{
    int money, choice, sum = 0, pin;

    while (1)
    {

        cout << "[1].Chake balance\n[2].Add Balance\n[3].Withrawl\n[4]. exit\n";
        cout << "_________________________________\n";
        cout << "enter your choice:";
        cin >> choice;
        cout << "enter PIN:";
        cin >> pin;
        int b = 1323407;

        switch (choice)
        {
        case 1:
            if (space_1 == -1)
            {
                cout << "RS.0\n";
                cout << "________________\n";
            }
            else
            {

                cout << "Total Amount: ";

                for (int i = space_1; i <= space_2; i++)
                {

                    sum = sum + atm[i];
                }
                cout << sum;

                cout << endl;
            }

            break;

        case 2:
            if (space_2 == limitation - 1)
            {
                cout << "Limit end!. Because limite is 4 Times..\n";
                cout << "________________________________________\n";
            }
            else
            {
                cout << "Add your Balance:";
                cin >> money;
                if (space_1 == -1)
                {
                    space_1 = space_2 = 0;
                }
                else
                {
                    space_2++;
                }
                atm[space_2] = money;
                cout << "RS." << money << " Added!\n";
                cout << "____________________________\n";
            }
            break;
        case 3:
            if (space_1 == -1)
            {
                cout << "RS.0\n\n";
                cout << "__________________________\n";
            }
            else
            {
                money =  atm[space_1];
                if (space_1 == space_2)
                {
                    space_1 = space_2 = -1;
                }
                else
                {
                int v= sum-space_1;
                cout<<v;
                }
                cout << "Successful! Withrawl..\n";
                cout << "__________________________\n";
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice!..\n";
            cout << "_______________________\n";
        }
    }
    return 0;
}
