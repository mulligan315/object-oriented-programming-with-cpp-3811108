#ifndef MELEE_ATTACK_H
#define MELEE_ATTACK_H

#include "ability.h"

class MeleeAttack : public Ability
{
public:
  MeleeAttack(const std::string &name, int force);

  void use() const;
  

private:
  int impactForce;
};

#endif