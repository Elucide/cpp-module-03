#pragma once
#include <string>
#include <iostream>


class ClapTrap
{
	private:
		std::string name;
		int hit_point;
		int energy_point;
		int attack_damage;
	public:
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
}
