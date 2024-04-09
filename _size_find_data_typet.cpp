#include <iostream>
using namespace std;

int main()
{
  // int integertype;
  // char chartype;
  // float floattype;
  // double doubletype;
  // long double lgdbtype;
  // string stringtype;
  // bool booltype;

  // cout << "the size of int is:" << sizeof(integertype) << " bytes" << endl;
  // cout << "the size of char is:" << sizeof(chartype) << " bytes" << endl;
  // cout << "the size of float is:" << sizeof(floattype) << " bytes" << endl;
  // cout << "the size of double is:" << sizeof(doubletype) << " bytes" << endl;
  // cout << "the size of long_double is:" << sizeof(lgdbtype) << " bytes" << endl;
  // cout << "the size of string is:" << sizeof(stringtype) << " bytes" << endl;
  // cout << "the size of bool is:" << sizeof(booltype) << " bytes" << endl;

  int integrtype;
  char charactertype;
  float floattype;
  string stringtype;
  bool booltype;
  double doubletype;
  long longtype;
  long double longdoubletype;
  long int longintegertype;

  cout << "the size of int is:" << sizeof(integrtype) << " bytes" << endl;
  cout << "the size of char is:" << sizeof(charactertype) << " bytes" << endl;
  cout << "the sizze of float is:" << sizeof(floattype) << " bytes" << endl;
  cout << "the size of string is: " << sizeof(stringtype) << " bytes" << endl;
  cout << "the size of bool is:" << sizeof(booltype) << " bytes" << endl;
  cout << "the size of double is:" << sizeof(doubletype) << " bytes" << endl;
  cout << "the size of long is :" << sizeof(longtype) << " bytes" << endl;
  cout << "the size of long doubletype is:" << sizeof(longdoubletype) << " bytes" << endl;
  cout << "the size of long integer type is:" << sizeof(longintegertype) << " bytes" << endl;

  return 0;
}