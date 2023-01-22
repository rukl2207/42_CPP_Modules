#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
 public:
	Dog( void );
	Dog( const Dog& other );
	Dog& operator= ( const Dog& other );
	virtual Animal& operator= ( const Animal& other );

	~Dog( void );

	void 			makeSound( void ) const;
	void 			printAllIdea( void ) const;
	void 			addIdea( std::string new_idea ) const;
	void 			chooseIdea( void ) const;
	virtual Brain	*getBrain( void ) const;
 private:
	Brain	*p_brain;
};
#endif
