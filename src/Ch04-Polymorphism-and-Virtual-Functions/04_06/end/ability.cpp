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
std::string Ability::toLower(const std::string &str) const
{
  std::transform(str.begin(), str.end(), str.begin(),
                 [](unsigned char c)
                 { return std::tolower(c); });
  return str;
}