#include <iostream>
#include <vector>

int main()
{
  //we don't need to provide vector type if compiler can deduce types.  As all items are doubles,
  //compiler deduces as vector<double>j
  std::vector ints {1.4,3.2,5.6,4.1,85.,33.9,64.4,2.3};
  return 0;
}