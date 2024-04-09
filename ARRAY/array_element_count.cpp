#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,7,9,8,2,0}; // one element 4 byte 
   int n= sizeof(arr);
    cout<<n<<endl;

   cout<<"tatal element is:"<< sizeof(arr)/sizeof(int);
}