#pragma once

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
 public:
	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& other );
	WrongAnimal& operator= (const WrongAnimal& other);

	~WrongAnimal( void );

	std::string		getType( void ) const;
	void			makeSound( void ) const;

 protected:
	std::string	type;
};

#endif
