#include <iostream>
#include <variant>
// Union differs from a struct in that it only holds the largest type. So maximum of int, short, and float in this example.
// Union stores only one value. For example, if a float is stored in f, the int in i will report the value equal to the same binary
// representation.If the int is called after it will show the result of the first 4 bytes;

// Unions can be used to pass different types of data around.
union U
{
  int i;
  short s;
  float f;
};

int main()
{

  U myUnion;
  myUnion.i = 50;
  myUnion.s = 35;

  std::cout << myUnion.i << "\n";
  std::cout << myUnion.s << "\n";
  std::cout << myUnion.f << "\n";
  // new type safe union called variant
  std::variant<int, short,std::string> data;
  data = "test";

  std::size_t ind = data.index();
  std::cout << "ind: " << ind << "\n";
  
  std::cout << "data size: " << sizeof(data) << "\n";
  std::cout << "data index: " << data.index() << "\n";
  return 0;
}