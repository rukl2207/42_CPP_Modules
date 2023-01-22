#include "../inc/HumanA.hpp"

HumanA::HumanA( void )
{}

HumanA::HumanA(const std::string name, Weapon &weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
	std::cout << this->_name << " appeared on the battlefield and took up " \
			<< this->_weapon->getType() << "." << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << this->_name << " died." << std::endl;
}

void HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his " \
		<< this->_weapon->getType() << "." << std::endl;
}
