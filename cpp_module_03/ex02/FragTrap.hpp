#pragma once

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
 public:
	// Constructors
	FragTrap( void );
	FragTrap( const std::string name );
	FragTrap( const FragTrap& other);

	// Destructor
	~FragTrap();

	void	attack(const std::string& target);
	void	highFivesGuys( void );
};

#endif
