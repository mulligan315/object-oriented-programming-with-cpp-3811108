#include <iostream>
#include <string>
#include <functional>

int add(int a, int b)
{
  return a+b;
}
int multiply(int a, int b)
{
  return a*b;
}


int main()
{
  //function pointer for functions: int name(int, int)
  // int (*op)(int,int);

  //modern approach using functional library
  std::function<int(int,int)> op;
  std::cout << "1 for add, 2 for multiply"<< std::endl;
  int n;
  std::cin>> n;
  n == 1 ? op = add : op = multiply;
  std::string name = n == 1 ? "add: " : "multiply: ";

  std::cout << "Operation " << name << op(2, 3) << std::endl;
}