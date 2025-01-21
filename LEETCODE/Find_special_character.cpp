#include<iostream>
#include<string>
using namespace std;//Input: words = ["bella","label","roller"  // Output: ["e","l","l"]
int main()
{
    
    string words = "bella";
    cout<<"[ "<<words.at(1)<<" ";
    cout<<words.at(6)<<" ";
    cout<<words.at(15)<<" ]";
   //cout<<words.find("h");//ye index batata hai
    return 0;
}


