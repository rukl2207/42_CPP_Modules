#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	this->_hit_points_max = this->_hit_points;
	std::cout << "FragTrap default constructor called for " \
	<< this->getName() << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	this->_hit_points_max = this->_hit_points;
	std::cout << "FragTrap name constructor called for " \
	<< this->getName() << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for " << this->getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->getName() << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->getHitPoints() == 0)
		std::cout << "FragTrap " << this->getName() \
		<< " cannot attack, not enough hit points." << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << "FragTrap " << this->getName() \
		<< " cannot attack, not enough energy points." << std::endl;
	else
		std::cout << "FragTrap " + this->getName() + " attack " + target + \
		", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " + this->getName() + " give me a five!" << std::endl;
}
