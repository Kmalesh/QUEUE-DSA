#include<iostream>
using namespace std;
class father
{ 
    protected:
    string surname ="kumar";
};
class sone_1:father
{
    string name="kamalesh";
    void dis()
    {
        cout<<name
    }


};
class sone_2:father
{
    string name="dinesh";

};
class sone_3:father
{
    string name="munna ";
};