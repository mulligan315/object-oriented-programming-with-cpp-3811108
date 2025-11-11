#include <iostream>

template <typename T>
T square(T num)
{
  return num * num;
}

int main()
{
  std::cout << square(16) << "\n";
  std::cout << square(16.2) << "\n";
  std::cout << square(16.8f) << "\n";
  return 0;
}