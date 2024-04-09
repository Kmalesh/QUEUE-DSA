#include <iostream>
using namespace std;
int main()
{

 int Size, i, a[10];
 int Sum = 0, Sum1 = 0;
 
 cout<<" Please Enter the Size of an Array : ";
 cin>>Size;
 
 cout<<"Please Enter the Array Elements\n";
 for(i = 0; i < Size; i++)
 {
      cin>>a[i];
 }
  
 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Sum += a[i];
   }
   else
   {
 	Sum1 +=a[i];
   }
 } 
 cout<<" The Sum of Even Numbers in this Array :"<< Sum<<endl;
 cout<<"The Sum of Odd Numbers in this Array :"<< Sum1;

 return 0;
}
