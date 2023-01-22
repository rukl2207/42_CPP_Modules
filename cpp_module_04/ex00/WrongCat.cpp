#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called for " << this << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal()
{
	*this = other;
	std::cout << "WrongCat copy constructor called for " << this << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called for " << this << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << this->getType() << " says: MEOW MEOW. " << this << std::endl;
}
