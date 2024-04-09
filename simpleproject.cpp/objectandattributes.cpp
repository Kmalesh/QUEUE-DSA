#include <iostream>
using namespace std;
int main()
{
    char name;
    int sh;
    cout << "kya aap aapna future dekhna chahte hai:\n";
    cout << "if you ha! then write your name of first letter :\n";
    cout << "NA ke liye: x\n";
    cout << "please write your choice:";
    cin >> name;

    if (name == 'a')
    {
        cout << "your name:alok" << endl
             << "studies boy" << endl
             << "coding master" << endl
             << "future LPA 40+";
    }
    else if (name == 'k')
    {
        cout << "name:kamalesh" << endl
             << "good boy" << endl
             << "poor study" << endl
             << "koi granty nahi job milega ki nahi";
    }
    else if (name == 'j')
    {
        cout << "name:jayram kumar" << endl
             << "reading fast but bhosdk wala hai" << endl
             << "roj hilata hai" << endl
             << "sudhar jaoo";
    }
    else if (name == 'S')
    {
        cout << "name:shivam kumar" << endl
             << "bahut parte ho balak kam para karo" << endl
             << "sab language khatam kar diye ho" << endl
             << "khub paro khub baro";
    }
    else if (name == 's')
    {
        cout << "name:sahid" << endl
             << " land lene me tej " << endl
             << " bhag bhosdk" << endl
             << " future dekh raha hai";
    }
    else if (name == 'm')
    {
        cout << "name:mani kumar" << endl
             << "class-bca" << endl
             << "section-E" << endl
             << "rom no:78";
    }
    else if (name == 'A')
    {
        cout << "name:Anurag kumar" << endl
             << "tum randua ho ." << endl
             << "hilana kam karo " << endl
             << " aur apne maushi se baat kiya karo";
    }

    else
    {
        cout << "koi baat nahi" << endl
             << "jab pela jayega tab tumko bujhayega";
    }
}