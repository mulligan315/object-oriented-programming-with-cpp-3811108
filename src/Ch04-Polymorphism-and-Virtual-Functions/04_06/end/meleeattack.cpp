// meleeattack.cpp
#include "meleeattack.h"

MeleeAttack::MeleeAttack(const std::string &name, int force)
    // TODO: Initialize base class
    : Ability(name), impactForce(force)
{
}
MeleeAttack::~MeleeAttack()
{
    std::cout << "\nMeleeAttack object is being deleted." << std::endl;
}

void MeleeAttack::use() const
{
    std::cout << "Impact Force: "<< impactForce <<"\n"
              << "Delivering devastating close-range attack!" << std::endl;
}