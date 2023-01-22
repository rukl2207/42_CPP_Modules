#include "AMateria.hpp"

AMateria::AMateria(): _type("Default AMateria")
{
	std::cout << "AMateria default constructor called for " << this << std::endl;
}

AMateria::AMateria(const std::string& type): _type(type)
{
	std::cout << "AMateria name constructor called for " << this << std::endl;
}

AMateria::AMateria(const AMateria& other): _type(other._type)
{
	std::cout << "AMateria copy constructor called for " << this << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "AMateria copy assignment operator called for " << this << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called for " << this << std::endl;
}

const std::string& AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use " << target.getName() << std::endl;
}
