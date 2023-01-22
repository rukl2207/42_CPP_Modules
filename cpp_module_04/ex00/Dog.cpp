#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called for " << this << std::endl;
}

Dog::Dog(const Dog& other): Animal()
{
	*this = other;
	std::cout << "Dog copy constructor called for " << this << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called for " << this << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " says: WOOF. " << this << std::endl;
}
