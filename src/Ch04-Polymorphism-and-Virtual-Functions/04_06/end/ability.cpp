// ability.cpp
#include "ability.h"
#include <algorithm>
#include <cctype>

Ability::Ability(const std::string &name) : abilityName(name) {}

Ability::~Ability()
{
  std::cout << "Ability object is being deleted." << std::endl;
}

void Ability::describe() const
{
  std::cout << "Ability: " << abilityName << std::endl;
}
std::string Ability::toLower(const std::string &str)
{
  std:: string strcopy {str};
  std::transform(strcopy.begin(), strcopy.end(), strcopy.begin(),
                 [](unsigned char c)
                 { return std::tolower(c); });
  return strcopy;
}