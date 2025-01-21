#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int >v(9);
   cout<<"size:"<<v.size()<<endl;
   cout<<"capacity:"<<v.capacity()<<endl;
   v.push_back(3);
   v.push_back(4);
   
   cout<<v.size()<<endl;

    v.resize(10);


 v.resize(12);
   cout<<v.size()<<endl;

   
}
