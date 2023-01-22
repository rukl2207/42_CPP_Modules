#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->p_brain = new Brain;
	std::cout << "Dog default constructor called for " << this << std::endl;
}

Dog::Dog(const Dog& other): Animal()
{
	*this = other;
	std::cout << "Dog copy constructor called for " << this << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignation operator called" << this << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal& Dog::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.getType();
		*(this->p_brain) = *(other.getBrain());
	}
	std::cout << "Animal / Dog assignation operator called" << this << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->p_brain;
	std::cout << "Dog destructor called for " << this << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " says: WOOF. " << this << std::endl;
}

void Dog::printAllIdea() const
{
	p_brain->printBrainIdea();
}

void Dog::addIdea(std::string new_idea) const
{
	p_brain->addBrainIdea(new_idea);
}

void Dog::chooseIdea() const
{
	std::cout << this->getType() << " idea: " << p_brain->chooseBrainIdea() << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->p_brain);
}
