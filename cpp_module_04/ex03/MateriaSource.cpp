#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MATERIASOURCE_SIZE; ++i)
		this->_materia_types[i] = NULL;
	std::cout << "MateriaSource deafult constructor called for " << this << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < MATERIASOURCE_SIZE; ++i)
		if (other._materia_types[i] != NULL)
			this->_materia_types[i] = other._materia_types[i]->clone();
	std::cout << "MateriaSource copy constructor called for " << this << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < MATERIASOURCE_SIZE; ++i)
			if (other._materia_types[i] != NULL)
			{
				delete this->_materia_types[i];
				this->_materia_types[i] = other._materia_types[i]->clone();
			}
	}
	std::cout << "MateriaSource copy assignment operator called for " << this << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MATERIASOURCE_SIZE; ++i)
		if (this->_materia_types[i] != NULL)
			delete this->_materia_types[i];
	std::cout << "MateriaSource destructor called for " << this << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < MATERIASOURCE_SIZE; ++i)
		if (!this->_materia_types[i])
		{
			this->_materia_types[i] = m;
			break;
		}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < MATERIASOURCE_SIZE; ++i)
		if (_materia_types[i] && _materia_types[i]->getType() == type)
		{
			std::cout << "\tcreateMateria: " << this->_materia_types[i]->getType() << std::endl;
			return (_materia_types[i]->clone());
		}
	return (0);
}
