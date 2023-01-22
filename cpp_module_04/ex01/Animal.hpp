#pragma once

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
 public:
	Animal( void );
	Animal( const Animal& other );
	virtual Animal& operator= (const Animal& other);

	virtual ~Animal( void );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;
	virtual void	printAllIdea( void ) const = 0;
	virtual void	addIdea( std::string new_idea ) const = 0;
	virtual void	chooseIdea( void ) const = 0;
	virtual Brain	*getBrain( void ) const = 0;

 protected:
	std::string	type;
};

#endif



