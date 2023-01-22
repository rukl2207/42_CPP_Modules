#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_hit_points_max = this->_hit_points;
	this->_is_guarded_gate = false;
	std::cout << "ScavTrap default constructor called for " \
	<< this->getName() << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_hit_points_max = this->_hit_points;
	this->_is_guarded_gate = false;
	std::cout << "ScavTrap name constructor called for " \
	<< this->getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	this->_is_guarded_gate = other._is_guarded_gate;
	std::cout << "ScavTrap copy constructor called for " << this->getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << this->getName() << std::endl;
}

void ScavTrap::guardGate()
{
	if (!this->_is_guarded_gate)
	{
		this->_is_guarded_gate = true;
		std::cout << "ScavTrap " << this->getName() \
		<< " is now in Gate keeper mode." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->getName() \
		<< " is already in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() == 0)
		std::cout << "ScavTrap " << this->getName() \
		<< " cannot attack, not enough hit points." << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << "ScavTrap " << this->getName() \
		<< " cannot attack, not enough energy points." << std::endl;
	else
		std::cout << "ScavTrap " + this->getName() + " attack " + target + \
		", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}
