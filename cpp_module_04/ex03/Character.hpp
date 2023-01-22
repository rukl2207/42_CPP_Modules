#pragma once

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

#define INVENTORY_SIZE 4

class AMateria;

class Character: public ICharacter
{
 public:
	Character( void );
	Character( const std::string& name);
	Character( const Character& other);
	Character& operator= ( const Character& other );

	~Character( void );

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	void inBag();

 private:
	std::string _name;
	AMateria*	_inventory[INVENTORY_SIZE];
};

#endif
