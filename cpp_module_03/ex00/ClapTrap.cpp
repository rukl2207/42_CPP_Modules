#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name("no_name"),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0),
	_hit_points_max(_hit_points)
{
	std::cout << "ClapTrap default constructor called for " << this->getName() << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0),
	_hit_points_max(_hit_points)
{
	std::cout << "ClapTrap name constructor called for " << this->getName() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor called for " << this->getName() << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << this->getName() << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return (*this);
	this->_name = other.getName();
	this->_hit_points = other.getHitPoints();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_damage = other.getAttackDamage();
	this->_hit_points_max = other._hit_points_max;
	std::cout << "ClapTrap copy assignment operator called " << this->getName() << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points == 0)
		std::cout << "ClapTrap " << this->_name \
		<< " cannot attack, not enough hit points." << std::endl;
	else if (this->_energy_points == 0)
		std::cout << "ClapTrap " << this->_name \
		<< " cannot attack, not enough energy points." << std::endl;
	else
		std::cout << "ClapTrap " + this->getName() + " attack " + target + \
		", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > amount)
		this->_hit_points -= amount;
	else
		this->_hit_points = 0;
	std::cout << "ClapTrap " << this->_name << " was attacked with " << amount \
	<< " hit points, now he has " << this->_hit_points << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << "ClapTrap " << this->_name \
		<< " cannot repair himself, not enough hit points." << std::endl;
	else if (this->_energy_points == 0)
		std::cout << "ClapTrap " << this->_name \
		<< " cannot repair himself, not enough energy points." << std::endl;
	else
	{
		if (this->_hit_points + amount < this->_hit_points_max)
			this->_hit_points += amount;
		else
			this->_hit_points = this->_hit_points_max;
		std::cout << "ClapTrap " << this->getName() \
		<< " repaired himself with " << amount << " hit points, now he has " \
		<< this->_hit_points << " hit points." << std::endl;
	}
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->_hit_points);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hit_points = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energy_points = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attack_damage = amount;
}
