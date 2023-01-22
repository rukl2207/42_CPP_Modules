#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called for " << this << std::endl;
}

Cat::Cat(const Cat& other): Animal()
{
	*this = other;
	std::cout << "Cat copy constructor called for " << this << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called for " << this << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->getType() << " says: MEOW. " << this << std::endl;
}
