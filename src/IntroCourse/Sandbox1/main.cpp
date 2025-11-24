#include <iostream>

int main()
{
  int amount;
  
  std::cin >> amount;

  //const int test = amount;

  int myArray[amount] {};
   
  myArray[0] = 4;

  for (auto element : myArray)
  {
    std::cout << element << "\n";
  }

  return 0;
}