#include <iostream>
#include <array>

void PrintArray (int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    std::cout << "passed: "<<arr[i] << std::endl;
  }
}


int main()
{
  int myArray[] {1,2,3,4,5} ;
  for(int element : myArray)
  {
    std::cout << element << std::endl;
  }
  int size = sizeof(myArray)/sizeof(myArray[0]);
  
  PrintArray(myArray,size);

  return 0;
}