#include<iostream>
using namespace std;
int even(int n){
 if(n%2==0){
    return true;
 }
 else{
    return false;
 }
}
int main()
{
    int c,d;
    cout<<"Enter the  first number:";
    cin>>c;
    cout<<"Enter the  first number:";
    cin>>d;

    for(int i=c;i<=d;i++){
        if(even(i)){
            cout<<i<<" ";
        }
    }
}
