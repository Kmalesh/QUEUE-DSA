    #include<iostream>
using namespace std;
int squre(int n)
{
    // cout<<"byte\n",sizeof(int);
    // cout<<"byte\n",sizeof(n); 
    return n*n;
    
}
int main()
{
    int num;
cout<<"enter your number:";
cin>>num;
int value=squre(num); //message call to squre
cout<<value; 
}


