#include<iostream>
#include<vector>
#include<cstring>

using namespace std;
class hospital{
private:
string hname;
char loc[30];
int price_of_bed;
string doctor_name;
float roh;

public:

void show_hospital_data()
{
    cout<<"enter the hospital data: ";
    cin>>hname;

    cout<<"enetr the hospital location: ";
    cin>>loc;

    cout<<"enter the price of bed: ";
    cin>>price_of_bed;

    cout<<"enter the doctor name: ";
    cin>>doctor_name;

    cout<<"enter the rating of hospital: ";
    cin>>roh;
    

}

};
