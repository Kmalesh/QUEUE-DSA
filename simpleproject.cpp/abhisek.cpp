#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Hospital
{
public:
    string hname;
    string loc;
    int beds;
    float rating;
    string contact;
    string doctor;
    int price;
};
class patients : public Hospital
{
    
    string p_name;
    int p_id;
};
void hospitaldata(vector<Hospital> &hospitals)
{
    cout << "hospital data" << endl;
    cout << "hospital location" << endl;
    cout << "available beds" << endl;
    cout << "rating" << endl;
    cout << "hospital contact" << endl;
    cout << "doctor name" << endl;
    cout << "bed of price" << endl;
    for (int i = 1; i <= 4; i++)
    {
        cout << hospitals[i].hname << endl;
        cout << hospitals[i].loc << endl;
        cout << hospitals[i].beds << endl;
        cout << hospitals[i].rating << endl;
        cout << hospitals[i].contact << endl;
        cout << hospitals[i].doctor << endl;
        cout << hospitals[i].price << endl;
    }
    cout << endl;
    cout << endl;
}
void patientsdata(vector <patient> &patient,vector<hospitaldata>&hospital) 
{
    cout << "print patient data" << endl;

    cout << "patient name" << endl;
    cout << "patient id" << endl;
    cout << "patient contact" << endl;
    cout << "alloted hospital" << endl;
    cout << "patient expenditure" << endl;
    
    for (int i = 1; i <= 4; i++)
    {
        cout << patient[i]. name << endl;
        cout << patient[i].id <<endl;
        cout << patient[i].contact << endl;
        cout << patient[i].hname << endl;
        cout << patient[i].price;
    }
   // cout << endl;
}
bool name(Hospital &A, Hospital &B)
{
    return A.hname < B.hname;
}
void sorthospitalbyname(vector<Hospital> hospital)
{
    sorthospitalbyname(hospital.begin(), hospital.end())
    cout << endl;
    cout << endl;
    hospitaldata(hospital);
}
bool rating(Hospital &A, Hospital &B)
{
    return A.rating < B.rating;
}
void sorthospitalbyrating(vector<Hospital> hospitals)
{
    sort(hospitals.being(), hospitals.end(), rating);
    cout << endl;
    cout << endl;
    hospitaldata(hospitals);
}
bool beds(Hospital &A, Hospital &B)
{
    return A.beds < B.beds;
}
void sorthospitalbybeds(vector<Hospital> hospitals)
{
    sort(hospitals.being(), hospitals.endl(), beds)
        
    
    cout << endl;
    hospitaldata(hospitals);
}
bool price(hospitals &a  hospitals &b)
{
    return A.price < B.price;
}
void sorthospitalbyprice(vector<Hospital> hospitals)
{
    sort(hospitals.begin(), hospitals.end(), price);
    cout << endl;
    cout << endl;
    hospitaldata(hospitals)
}
void sorthospitalbycity(string city, vector<hospitals> hospital)
{
    cout << "hospital by name" << city << endl;
    cout << "hospital name" << endl;
    cout << "hospital location" << endl;
    cout << "available bed" << endl;
    cout << "hospital rating" << endl;
    cout << "hospital contact" << endl;
    cout << "hospital doctor name" << endl;
    cout << "hospital price of bed" << endl;
    for (int i = 1; i <= 4; i++)
    {
        if (hospital[i].loc != city)
        {
            continue;
            cout << hospital[i].hname << endl;
            cout << hospital[i].loc << endl;
            cout << hospital[i].beds << endl;
            cout << hospital[i].rating << endl;
            cout << hospital[i].contact << endl;
            cout << hospital[i].doctor << endl;
            cout << hospital[i].price << endl;
        }
        cout<< endl;
    }
    void hospitalmanagement(string patient_name[], int patient_id[],
                            string patient_contact[], int booking_cost[], string hospital_name[],
                            string loc[], int bed[], float ratings[],
                            string hospital_contact[], string doctor_name[], int price[])
    vector<Hospital>  
    hospitals
    Hospital 

    for(int i=1; i<=4;i++)
    {
        h.hname = Hname[i];
        h.loc = locs[i];
        h.beds = bed[i];
        h.rating = ratings[i];
        h.contact = contacts[i];
        h.doctor = doctorname[i];
        h.price = priceofbed[i];
        hospital.push_back(h);
    }
    vector(<patient>&patients)
    patient p
    for (int i=1; i<=4; i++)
    {
        p.p_name = patientname[i];
        p.p_id = patientid[i];
        p.contact = patientcontact[i];
        p.price = bookingcost[i];
        patient.pushback(p)<<endl;
    }
    // cout << endl;
    hospitaldata(hospitals)
    

    patientdata(patient)

    sorthospitalbyname(hospitals)

    sorthospitalbyrating(hospitals)

    sorthospitalbycity(hospitals)

    sorthospitalbybeds(hospitals)

    sorthospitalbyprice(hospitals)
};
int main()
{
    string patientname[] = {"p1", "p2", "p3", "p4"};

    int patientid[] = {1, 2, 3, 4};

    string patientcontact[] = {"9372xx", "87085xx", "73210xx", "4250xx"};

    int bookingcost[] = {1000, 800, 900, 5000};

    string Hname[] = {"h1", "h2h", "h3h", "h4h"};

    string locs[] = {"mumbai", "patna", "haryana", "mullana"};

    int bed[] = {1, 7, 9, 7};

    int ratings[] = {7.2, 9.4, 8.7, 9.9};

    string contacts[] = {"abhi9372", "937278xx", "8708yyy", "732106yy"};

    string doctorname[] = {"abhishek", "anushka", "aakash", "amrita"};

    int priceofbed[] = {1000, 900, 9000, 8000};

    char hospitalmanagement(patientname, patientid, bookingcost, Hname, locs, bed, ratings, contacts, doctorname, priceofbed);


}