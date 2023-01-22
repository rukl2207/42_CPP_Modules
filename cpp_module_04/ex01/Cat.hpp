#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
 public:
	Cat( void );
	Cat( const Cat& other );
	Cat& operator= ( const Cat& other );
	virtual Animal& operator= ( const Animal& other );

	~Cat( void );

	void 			makeSound( void ) const;
	void 			printAllIdea( void ) const;
	void			addIdea( std::string new_idea ) const;
	void 			chooseIdea( void ) const;
	virtual Brain	*getBrain( void ) const;
 private:
	Brain	*p_brain;
};

#endif
