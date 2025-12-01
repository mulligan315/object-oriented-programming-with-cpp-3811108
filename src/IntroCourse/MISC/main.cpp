#include <iostream>
#include <string>

int main()
{
  
  int result = -2'000'000;
  unsigned int c = 1'000;
  if(result>(int)c)
    std::cout<< "huh" << std::endl;

  double hexTrans = 0x1.4p0;
  std::cout<<hexTrans<<std::endl;

  float pi=3.141526;

  auto xi = (std::string) "Sean";

  return 0;

}