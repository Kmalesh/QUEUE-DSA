#include<iostream>
using namespace std;
struct book
{
    char book_name[15];
    int price;
    char company_name[20]; 
};
int main()
{
   struct book book;
   cout<<"enter book name:";
   cin>>book.book_name;
   cout<<"enter book price:";
   cin>>book.price;
   cout<<"enter company name:\n";
   cin>>book.company_name;
  
   cout<<"total information is:\n";
   cout<<"book name:"<<book.book_name<<"\n";
   cout<<"book price:"<<book.price<<"\n"; 
   cout<<"name of book company:"<<book.company_name<<"\n";
   return 0;
}