#include <iostream>
#include <string>
#include <utility>

int main()
{
  std::string s1 = "Hey";
  std::string&& s2 = s1 + " pretend this is really long";
  std::cout << "s2: " <<s2 << std::endl;
  std::string s3 = std::move(s2);  

  std::cout<< "s3: " << s3 << std::endl;
  std::cout << "s2: " << s2 << std::endl; // now empty
  return 0;
}