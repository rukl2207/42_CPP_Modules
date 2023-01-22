#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
 public:
	// Constructors
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap &other);

	// Destructor
	~ClapTrap( void );

	// copy assignment operator overload
	ClapTrap &operator= ( const ClapTrap &other );

	void			attack( const std::string& target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	// Getter
	std::string		getName( void ) const;
	unsigned int	getHitPoints ( void ) const;
	unsigned int	getEnergyPoints ( void ) const;
	unsigned int	getAttackDamage ( void ) const;

	// Setter
	void			setName( std::string name );
	void			setHitPoints( unsigned int amount );
	void			setEnergyPoints( unsigned int amount );
	void			setAttackDamage( unsigned int amount );

 protected:
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;
	unsigned int	_hit_points_max;

	// Setter
	void			setHitPointsMax( unsigned int amount );

};

#endif
