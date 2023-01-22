#pragma once

# include <iostream>
# include <string>

class Zombie {
 public:
	Zombie( std::string name = "noname");
	~Zombie( void );
	/**
	 * The function announces a zombie
	 */
	void	announce( void ) const;

 private:
	std::string	_name;
};

/**
 * The function creates a zombie, name it, and return it so you can use it outside
 * of the function scope.
 * @param name zombie name
 * @return pointer to new zombie
 */
Zombie	*newZombie( std::string name );

/**
 * The function creates a zombie, name it, and the zombie announces itself.
 * @param name zombie name
 */
void	randomChump( std::string name );
