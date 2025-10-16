#include "rangedattack.h"

RangedAttack::RangedAttack(const std::string &name, int range)
    // TODO: Initialize base class
    : Ability(name),
    rangeValue(range)
{
}
void RangedAttack::use() const
{
    std::cout << "Range: " << rangeValue << "/n"
              << "Firing " << toLower(abilityName) << " beam!" << std::endl;
}