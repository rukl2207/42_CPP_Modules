#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called for " << this << std::endl;
}

Cure::Cure(const Cure& other): AMateria(other)
{
	std::cout << "Cure copy constructor called for " << this << std::endl;
	*this = other;
	return;
}

Cure& Cure::operator=(const Cure& other)
{
	this->_type = other._type;
	std::cout << "Cure copy assignment operator called for " << this << std::endl;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called for " << this << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

}
