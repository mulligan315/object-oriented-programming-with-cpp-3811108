#include <iostream>
int main()
{
  int age;
  std::cout << "Enter age: ";
  std::cin >> age;
  std::cin.ignore();
  char name[80];
  std::cout << "Enter a name: ";
  std::cin.getline(name, 80);
  std::cout << "Age: " << age << std::endl;
  std::cout << "Name: " << name << std::endl;
  return 0;
}