#include "Character.hpp"

Character::Character():_name("Default Character")
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
	std::cout << "Character default constructor called for " << this << std::endl;
}

Character::Character(const std::string& name): _name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		_inventory[i] = NULL;
	std::cout << "Character name constructor called for " << this << std::endl;
}

Character::Character(const Character& other)
{
	this->_name = other._name;
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
	std::cout << "Character copy constructor called for " << this << std::endl;
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < INVENTORY_SIZE; ++i)
		{
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i];
			else
				this->_inventory[i] = NULL;
		}
	}
	std::cout << "Character copy assignment operator called for " << this << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		if (this->_inventory[i])
			delete _inventory[i];
	std::cout << "Character destructor called for " << this << std::endl;
}

const std::string& Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	for (int i = 0; i < INVENTORY_SIZE && _inventory[i] != NULL; ++i)
		;
	if (i < INVENTORY_SIZE)
		_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < INVENTORY_SIZE && _inventory[idx])
	{
		std::cout << "\tCharacter " << getName() <<" unequip " << _inventory[idx]->getType() << std::endl;
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	inBag();
	if (idx >= 0 && idx < INVENTORY_SIZE && _inventory[idx])
	{
		std::cout << "\tCharacter " << getName() <<" use " << _inventory[idx]->getType() << std::endl;
		this->_inventory[idx]->use(target);
		delete _inventory[idx];
		this->unequip(idx);
	}
}

void Character::inBag()
{
	int flag = 0;
	std::cout << "\tinBag:"<< std::endl;
	for (int i = 0; i < INVENTORY_SIZE; ++i)
		if (this->_inventory[i])
		{
			std::cout << "\t\t" << _inventory[i]->getType() << std::endl;
			flag = 1;
		}
	if (flag == 0)
		std::cout << "\t\tNone" << std::endl;
}
