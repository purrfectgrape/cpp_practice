// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;  // declaring pointers p1 and p2

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  cout << "value of p1: " << p1 << '\n';
  cout << "value of p2: " << p2 << '\n';
  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  cout << "value of p1: " << p1 << '\n'; // should be the same as before
  cout << "value of p2: " << p2 << '\n'; // should be the same as before
  cout << "first value: " << firstvalue << '\n'; // should be 10
  cout << "second value: " << secondvalue << '\n'; // should also be 10
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 100;          // value pointed to by p1 = 100
  cout << "value of p1: " << p1 << '\n'; // p1 is now the same as p2 (address of secondvalue). but &firstvalue is unchanged. Therefore p1 now points to secondvalue. Modifying *p1 modifies secondvalue.
  cout << "value of p2: " << p2 << '\n';
  cout << "address of firstvalue: " << &firstvalue << '\n';
  cout << "address of secondvalue: " << &secondvalue << '\n';
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
