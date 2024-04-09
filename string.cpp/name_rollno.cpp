#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char correct[] = "kamalesh";
    int correctrollno[] = {1323407};

    char name[10];
    int rollno[10];

    for (int i = 1; i <= 5; i++)
    {                                         


        cout << "enter your name:";
        cin >> name;

        cout << "enter your roll no:";
        cin >> rollno[1];

        int value = (strcmp(correct, name)==0 && (correctrollno, rollno)==0);
        if (value==0)
        {
            cout << "varified successful! welcome.. " << name << endl;
        }
        else
        {
            cout << "invalid name.. and rollno" << endl;
            cout << "please try again!" << endl;
        }
    }

    return 0;
}