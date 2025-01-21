#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    cout<<"first method"<<endl;
    // vector<int>vec(vector_size, element)
    vector<int> vec1(5,3); // only two pair
    // cout << vec1[0];
    // cout << vec1[1];
    // cout << vec1[2];
    // cout << vec1[3];
    // cout << vec1[4]<<endl;
    cout<<"capacity"<<vec1.capacity();// 5

    vec1.push_back(1);//for empty vector
     vec1.push_back(2);
     vec1.push_back(3);
     vec1.push_back(4);
     vec1.push_back(5);
    cout<<"capacity"<<vec1.capacity();// 8
    
//  cout<<"second method"<<endl;

    vector<int> vec = {3, 1, 22, 3, 21, 43, 53};
    for (int value : vec) // for each loop
    { 
        cout << value << " ";
    }
 
 vector<int> vec;  //Empty vactor 


}