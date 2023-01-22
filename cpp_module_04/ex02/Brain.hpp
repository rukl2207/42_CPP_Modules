#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

#define SIZE_BRAIN 100

class Brain
{
 public:
	Brain( void );
	Brain( const Brain& other );
	Brain& operator= ( const Brain& other);

	~Brain( void );

	void		printBrainIdea( void );
	void		addBrainIdea( std::string new_idea );
	std::string	chooseBrainIdea( void );

 private:
	std::string _ideas[SIZE_BRAIN];
	int 		_index_ideas;
};

#endif
