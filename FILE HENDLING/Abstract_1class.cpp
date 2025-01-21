// The purpose of an abstract class (often referred to as an ABC) is to provide 
// an appropriate base class from which other classes can inherit.
//  Abstract classes cannot be used to instantiate objects and serves 
//  only as an interface. Attempting to instantiate an object of 
//  an abstract class causes a compilation error.

 #include<iostream>
 using namespace std;
class A
{
    public:
    virtual void show()=0;
};
void A::show()//pure virtual diffenation
{
    cout<<"pure virtual class";
}
class B :public A
{
    public:
    void show()
    {
        cout<<"implimantation of  virtual class ";
    }
  
};
int main()
{
    A *P;//base
    B ob;
     p = &ob;//derive
    p->show();

    return 0;
}