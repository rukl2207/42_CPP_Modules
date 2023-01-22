#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->p_brain = new Brain;
	std::cout << "Cat default constructor called for " << this << std::endl;
}

Cat::Cat(const Cat& other): Animal()
{
	*this = other;
	std::cout << "Cat copy constructor called for " << this << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignation operator called" << this << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal& Cat::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.getType();
		*(this->p_brain) = *(other.getBrain());
	}
	std::cout << "Animal / Cat assignation operator called" << this << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->p_brain;
	std::cout << "Cat destructor called for " << this << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->getType() << " says: MEOW. " << this << std::endl;
}

void Cat::printAllIdea() const
{
	p_brain->printBrainIdea();
}

void Cat::addIdea(std::string new_idea) const
{
	p_brain->addBrainIdea(new_idea);
}

void Cat::chooseIdea() const
{
	std::cout << this->getType() << " idea: " << p_brain->chooseBrainIdea() << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->p_brain);
}
