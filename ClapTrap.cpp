#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "default constructor called" << std::endl;
	this->name = "default";
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "Naming constructor called" << std::endl;
	this->name = "default";
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (--this->energy_point >= 1 && this->hit_point)
		std::cout << "ClapTrap " << this->name << " attacks " << target << ". causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_point -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " damage and has now " << this->hit_point << " hit point!" << std::endl;
}
