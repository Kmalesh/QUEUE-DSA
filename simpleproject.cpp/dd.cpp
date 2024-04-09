#include<iostream>
using namespace std;
class student{

    private:
    int rollno;
    char username[40];
    
    string department;
    public:
    void show()
    {
        cout<<"enter the roll no: ";
        cin>>rollno;

        cout<<"enter the username: ";
        cin>>username;

        cout<<" enter the department: ";
        cin>>department;
        cout<<endl;
        cout<<"student information: "<<endl<<endl;
        cout<<endl;

    }
    void display()
    {
        cout<<"roll no: "<<rollno<<endl;
        cout<<"username: "<<username<<endl;

        cout<<"enter the department: "<<department;
        cout<<endl;
        cout<<endl;



        cout<<"******* welcome *******"<<endl;

    }
};
int main()
{
    int n;
    cout<<"enter the studebnt number: "<<endl;
    cin>>n;
    for(int i=0; i<=n; i++)
    {

    student s1;
    s1.show();
    s1.display();
    }
    return 0;
}