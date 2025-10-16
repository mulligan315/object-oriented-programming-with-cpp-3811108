#include "warrior.h"

Warrior::Warrior(const std::string &name, int health, int strength)
    : Character(name, health), strength(strength)
{
}

void Warrior::attack() const
{
  // TODO: Implement attack including strength bonus
  int totalDamage = BASE_DAMAGE + strength;
  std::cout << name << " attacks for " << totalDamage << " damage! ("
            << BASE_DAMAGE << " + " << strength << ")" << std::endl;
}

void Warrior::displayStats() const
{
  // TODO: Implement stats display including strength and equipment
  Character::displayStats();
  std::cout << "Strength: " << strength << std::endl;
  displayInventory();
}

void Warrior::addItem(const std::string &item)
{
  // TODO: Use Equipment member to add item
  equipList.addItem(item);
}