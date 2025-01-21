#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    float marks;
};
int main(){
    student shahid,kamlesh;
    cout<<"student information"<<endl;
    shahid.name = "shahid";
    cout<<"name : "<<shahid.name<<endl;
    shahid.roll_no =1323401;
    cout<<"roll no : "<<shahid.roll_no<<endl;
    shahid.marks  = 85.5;
    cout<<"marks : "<<shahid.marks<<endl;
    
    cout<<"************************"<<endl;
    kamlesh.name = "kamlesh";
    cout<<"name : "<<kamlesh.name<<endl;
    kamlesh.roll_no =1323407;
    cout<<"roll no : "<<kamlesh.roll_no<<endl;
    kamlesh.marks  = 100;
    cout<<"marks : "<<kamlesh.marks<<endl;
    

}