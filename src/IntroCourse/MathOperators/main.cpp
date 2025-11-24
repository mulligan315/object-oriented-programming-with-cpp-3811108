#include <iostream>
#include <string>

template <typename T>
T square(T num)
{
  return num * num;
}
template <typename T1, size_t N>
std::string duplicate(T1 start)
{
  std::string text = std::to_string(start);
  std::string result{};
  for(int i = 0;i < N; i++)
  {
    result = result + " " + text;
  }
  return result;
}

auto square2(auto input)
{
  return input*input;
}

int main()
{
  std::cout << square(16) << "\n";
  std::cout << square(16.2) << "\n";
  std::cout << square(16.8f) << "\n";
  std::cout << square2(16.8f) << "\n";
  std::string attach = duplicate<float,5>(6.4f);
  std::cout << attach << "\n";
  
  return 0;

}