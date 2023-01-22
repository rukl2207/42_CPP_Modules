#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("noname_clap_name")
{
	this->_name = "noname";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	this->_hit_points_max = this->_hit_points;
	std::cout << "DiamondTrap default constructor called for " \
	<< this->getName() << std::endl;

}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	this->_hit_points_max = this->_hit_points;
	std::cout << "DiamondTrap name constructor called for " \
	<< this->getName() << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called for " << this->getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << this->getName() << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this == &other)
		return (*this);
	this->_name = other.getName();
	this->_hit_points = other.getHitPoints();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_damage = other.getAttackDamage();
	this->_hit_points_max = other._hit_points_max;
	std::cout << "DiamondTrap copy assignment operator called " << this->getName() << std::endl;
	return (*this);
}

std::string DiamondTrap::getName() const
{
	return (this->_name);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name: " << this->getName() \
	<< ". My ClapTrap name: " <<ClapTrap::getName() << "." << std::endl;
}
