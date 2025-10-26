#include "rangedattack.h"

RangedAttack::RangedAttack(const std::string &name, int range)
    // TODO: Initialize base class
    : Ability(name),
    rangeValue(range)
{
}
RangedAttack::~RangedAttack()
{
    std::cout << "\nRangedAttack object is being deleted." << std::endl;
}
void RangedAttack::use() const
{
    std::cout << "Range: " << rangeValue << " meters\n"
              << "Firing " << toLower(abilityName) << " beam!" << std::endl;
}