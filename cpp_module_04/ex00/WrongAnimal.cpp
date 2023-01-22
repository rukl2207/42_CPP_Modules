#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Default")
{
	std::cout << "WrongAnimal default constructor called for " << this << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->type = other.type;
	std::cout << "WrongAnimal copy constructor called for " << this << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.type;
	std::cout << "WrongAnimal assignation constructor " << this << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called for " << this << std::endl;

}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << this->getType() << " WrongAnimal cannot make any sound. " << this << std::endl;
}
