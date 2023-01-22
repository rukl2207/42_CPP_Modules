#pragma once

# include <iostream>
# include <string>

class Weapon
{
 public:
	Weapon(const std::string type);
	~Weapon( void );
	/**
	 * Getter. The function returns a const reference to type
	 * @return const reference to type
	 */
	const std::string	&getType( void ) const;
	/**
	 * Setter. The function that sets type using the new one passed as parameter.
	 * @param type const strint type
	 */
	void				setType(const std::string type);
 private:
	std::string	_type;
	Weapon( void );
};
