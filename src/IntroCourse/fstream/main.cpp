#include <iostream>
#include <fstream>


int main()
{
  std::ofstream testFile;
  testFile.open("testfile.txt",std::ios::app);

  testFile << "My Fifth CPP write. \n";
  testFile.close();
  std::ifstream readFile("testfile.txt");
  if(!readFile)
  {
    std::cout << "file not found for reading.\n";
  }else
  {
    std::string readString;
    while(readFile.fail() == false)
    {
      std::getline(readFile,readString);
      std::cout << readString << "\n";
      
    }
    char name[90] = "Sean Ablett";
    

    readFile.close();
  }
  return 0;
}