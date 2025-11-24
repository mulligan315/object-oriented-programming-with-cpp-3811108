#include <iostream>
#include <string>

template <typename R>
R Sum()
{
  return R{};
}



template <typename R, typename T, typename... Args>
R Sum(T&& start, Args&&... args) 
{
  return static_cast<R>(start) + Sum<R>(args...);
}


int main()
{

  std::cout<<"Sum is "<<Sum<double>(1,18,22,4.2f,6,8.1,44)<<"\n";
  return 0;
}