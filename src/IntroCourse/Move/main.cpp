#include <iostream>
#include <string>
#include <memory>

class UDT
{
  public:
    UDT() 
    {
      std::cout << "UDT Created" << std::endl;
    }
    ~UDT()
    {
      std::cout << "UDT Destroyed" << std::endl;
    }
};

int main()
{
  UDT* test = new UDT();
  {
    std::shared_ptr<UDT> ptr1(test);
  }
  std::cout << "Does destructor run before this line?" << std::endl;
  return 0;
}