#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called for " << this << std::endl;
}

Ice::Ice(const Ice& other): AMateria(other)
{
	std::cout << "Ice copy constructor called for " << this << std::endl;
	*this = other;
	return;
}

Ice& Ice::operator=(const Ice& other)
{
	this->_type = other._type;
	std::cout << "Ice copy assignment operator called for " << this << std::endl;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called for " << this << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}
