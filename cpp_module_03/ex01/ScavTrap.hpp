#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
 public:
	// Constructors
	ScavTrap( void );
	ScavTrap( const std::string name );
	ScavTrap( const ScavTrap& other);

	// Destructor
	~ScavTrap( void );

	void	guardGate( void );
	void	attack(const std::string& target);
 private:
	bool	_is_guarded_gate;
};

#endif
