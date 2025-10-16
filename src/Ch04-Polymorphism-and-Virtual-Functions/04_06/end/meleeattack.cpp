// meleeattack.cpp
#include "meleeattack.h"

MeleeAttack::MeleeAttack(const std::string &name, int force)
    // TODO: Initialize base class
    : Ability(name), impactForce(force)
{
}

void MeleeAttack::use() const
{
    std::cout << "Impact Force: "<< impactForce <<"/n"
              << "Delivering devastating close-range attack!" << std::endl;
}