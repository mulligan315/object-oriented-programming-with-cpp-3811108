#include <iostream>

template <typename T, int Size=10>
class Container
{
public:
  Container()
  {
    data = new T[Size];
  }
  ~Container()
  {
    delete[] data;
  }
  static T var;

private:
  T *data;
};

template<typename T, int Size>
T Container<T,Size>::var;

int main()
{
  
  Container<std::string, 8> test();
  Container<std::string, 8>::var = "word";

  std::cout << Container<std::string, 8>::var << "\n";
  
  return 0;
}