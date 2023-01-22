#include "../inc/HumanB.hpp"

HumanB::HumanB( void )
{}

HumanB::HumanB(const std::string name)
{
	this->_name = name;
	this->_isArmed = false;
	std::cout << this->_name << " appeared on the battlefield." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " died." << std::endl;
}

void HumanB::attack( void )
{
	if (this->_isArmed)
		std::cout << this->_name << " attacks with his " \
				<< this->_weapon->getType() << "." << std::endl;
	else
		std::cout << this->_name << " doesn't have a weapon." << std::endl;
}

void HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
	this->_isArmed = true;
	std::cout << this->_name << " took up " \
			<< this->_weapon->getType() << "." << std::endl;
}
