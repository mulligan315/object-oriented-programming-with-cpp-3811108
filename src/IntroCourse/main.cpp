#include <iostream>
#include <climits>
#include <limits>
#include <cmath>
#include <string>


int main()
{
  int i =10;
  int& ref = i;
  // this one only works because compiler creates temp variable for const, without it, it would fail, as "20" doesn't
  //have a location to refer to.
  const int&ref2 = 20;
  std::cout << "address of i:   " << &i << std::endl;
  std::cout << "address of ref: " << &ref << std::endl;
  std::cout << "address of ref2:" << &ref2 << std::endl;
  std::cout << ref << std::endl;
  std::cout << ref2 << std::endl;
  return 0;
}
