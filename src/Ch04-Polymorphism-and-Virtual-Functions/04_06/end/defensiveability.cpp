#include "defensiveability.h"


DefensiveAbility::DefensiveAbility(const std::string &name, int protection)
    : Ability(name), protectionAmount(protection)
{
}

DefensiveAbility::~DefensiveAbility()
{
    std::cout << "\nDefensiveAbility object is being deleted." << std::endl;
}

void DefensiveAbility::use() const
{
    std::cout << "Protection: " << protectionAmount << "\n"
                << "Activating defensive " << toLower(abilityName) << "!" << std::endl;
}
