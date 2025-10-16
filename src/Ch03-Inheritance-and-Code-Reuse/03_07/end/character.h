#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "equipment.h"

class Character
{
public:
  Character(const std::string &name, int health);
  void attack() const;
  void displayStats() const;
  void displayInventory() const { equipList.displayInventory(); }

protected:
  std::string name;
  int health;
  static const int BASE_DAMAGE = 10;
  Equipment equipList; // Composition: Character has Equipment
};

#endif