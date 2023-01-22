#pragma once

# include "../inc/Weapon.hpp"

class HumanB
{
 public:
	HumanB(const std::string name);
	~HumanB( void );
	/**
	 * The function displays attack.
	 */
	void	attack( void );
	/**
	 * Setter. Еру function sets the weapon.
	 * @param weapon weapon
	 */
	void setWeapon( Weapon &weapon );
 private:
	std::string	_name;
	Weapon		*_weapon;
	bool		_isArmed;
	HumanB( void );
};
