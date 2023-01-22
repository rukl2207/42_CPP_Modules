#include "../inc/Weapon.hpp"

Weapon::Weapon( void )
{}

Weapon::Weapon(const std::string type)
{
	this->_type = type;
}

Weapon::~Weapon( void )
{
	std::cout << this->_type << " destroyed." << std::endl;
}

const std::string &Weapon::getType( void ) const
{
	return (this->_type);
}

void Weapon::setType(const std::string type)
{
	this->_type = type;
}
