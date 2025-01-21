#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class temp
{
    string username, Email, password;
    string searchname, searchpassword, searchemail;
    fstream file;

public:
    void Login();
    void signup();
    void forgotpassword();

} obj;
int main()
{
    int choice;
    cout << "*********Form************\n";
    cout << "[1].Login\n[2].Sign Up\n[3].Forgot Password\n[4].Exit\n";
    cout << "Enter your choice:";
    cin >> choice;

    switch (choice)
    {
    case '1':
        obj.Login();
        break;

    case '2':
        obj.signup();
        break;

    case '3':
        obj.forgotpassword();
        break;

    case '4':
        return 0;
        break;

    case '5':
        break;
        cout << "Invalid SElection.......!\n";
    }
}

void temp ::Login()
{
    cout << "*************Login Page****************\n";
    cout << "Enter your user name:\n";
    getline(cin, searchname);
    cout << "Enter your password:\n";
    getline(cin, searchpassword);
    file.open("D://registration//student.txt", ios::in);
    getline(file, username, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');
    while (!file.eof())
    {
        if (username == searchname)
        {
            if (password == searchpassword)
            {
                cout << "Acount Login Successfully!\n";
                cout << "username:" << username << endl;
                cout << "Email Address:" << Email << endl;
            }
            else
            {
                cout << "incorrected password....!";
            }
        }
        getline(file, username, '\n');
        getline(file, Email, '\n');
        getline(file, password, '\n');
    }
    file.close();
}
void temp::signup()
{
    cout << "************Signup Page**************\n";
    cout << "Enter username :\n";
    getline(cin, username);
    cout << "Enter Email address:\n";
    getline(cin, Email);
    cout << "Enter Password:\n";
    getline(cin, password);
    file.open("D://registration//student.txt", ios::out | ios::app);
    cout << username << " " << Email << " " << password << endl;

    file.close();
}
void temp::forgotpassword()
{
    cout << "Enter username:\n";
    getline(cin, username);
    cout << "Enter Email Address:\n";
    getline(cin, Email);
    file.open("D://registration//student.txt", ios::in);
    getline(file, username, '*');
    getline(file, searchemail, '*');
    getline(file, password, '\n');
    while (!file.eof())
    {
        if (username == searchname)
        {
            if (Email == searchemail)
            {
                cout << "Acound found!\n";
                cout << "your password:" << password << endl;
            }
            else
            {
                cout << "NOt found!\n";
            }
        }
        else
        {
            cout << "not found!\n";
        }
         file.close();
    }
   
}