#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);//insert value in vector
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    cout << "before :- 5 size" << endl;

    vec.pop_back();//Delete vector element
    vec.pop_back();

    cout << "size :"
        << vec.size() << endl;//vector size find

    cout << vec.at(1);// index pe ka value batayega
    return 0;
}