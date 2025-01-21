#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    char name[100];

    ofstream fout("D://file//STUDENT.txt", ios::app);
    fout << "hello guys welcome to my youtube chanel";

    ifstream fin("D://file//STUDENT.txt", ios::in);
    fin >> name;
    cout << name;     
    fin.close();
    return 0;
}