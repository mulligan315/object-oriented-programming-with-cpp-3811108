#include <iostream>

constexpr int add(int a, int b)
{
  return a+b;
}


int main()
{
  constexpr int sum = add(8,17);
  

  return 0;
}