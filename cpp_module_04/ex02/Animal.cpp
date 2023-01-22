#include "Animal.hpp"

Animal::Animal(): type("Default")
{
	std::cout << "Animal default constructor called for " << this << std::endl;
}

Animal::Animal(const Animal& other)
{
	this->type = other.type;
	std::cout << "Animal copy constructor called for " << this << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	this->type = other.type;
	std::cout << "Animal assignation constructor " << this << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called for " << this << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
