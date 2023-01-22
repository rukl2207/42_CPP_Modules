#include "Brain.hpp"

Brain::Brain()
{
	_index_ideas = 0;
	std::cout << "Brain default constructor called for " << this << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain copy constructor called for " << this << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
		for (int i = 0; i < SIZE_BRAIN; ++i)
			this->_ideas[i] = other._ideas[i];
	std::cout << "Brain assignation constructor " << this << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called for " << this << std::endl;
}

void Brain::printBrainIdea()
{
	std::cout << "Brain: " << this <<std::endl;
	for (int i = 0; i < SIZE_BRAIN; ++i)
	{
		if (this->_ideas[i].empty())
			break;
		std::cout << "\t" << this->_ideas[i] <<std::endl;
	}
}

void Brain::addBrainIdea(std::string new_idea)
{
	this->_ideas[this->_index_ideas] = new_idea;
	this->_index_ideas++;
	if (this->_index_ideas == SIZE_BRAIN)
		this->_index_ideas = 0;
}

std::string Brain::chooseBrainIdea()
{
	std::srand(std::time(NULL));
	usleep(800000);
	int i;
	for (i = 0; i < SIZE_BRAIN; ++i)
		if (this->_ideas[i].empty())
			break;
	if (i == 0)
		return ("No ideas, just relax.");
	return (this->_ideas[std::rand() % i]);
}
