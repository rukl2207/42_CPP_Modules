#pragma once

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
 public:
	// Constructors
	DiamondTrap( void );
	DiamondTrap( const std::string name );
	DiamondTrap( const DiamondTrap& other);

	//Destructor
	~DiamondTrap( void );

	// copy assignment operator overload
	DiamondTrap &operator= ( const DiamondTrap& other );

	std::string	getName( void ) const;
	void		attack( const std::string& target );
	void		whoAmI( void );

 private:
	std::string _name;
};

#endif
