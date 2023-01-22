#pragma once

# include <iostream>
# include <string>

class Zombie {
 public:
	Zombie( std::string name = "noname" );
	~Zombie( void );
	/**
	 * The function announces a zombie
	 */
	void	announce( void ) const;
	/**
	 * the function sets the name of the zombie
	 * @param name zombie name
	 */
	void	setName( std::string name = "noname" );

 private:
	std::string	_name;
};

/**
 * The function allocates N Zombie objects in a single allocation.
 * Then, it has to initialize the zombies, giving each one of them the name
 * passed as parameter. The function returns a pointer to the ﬁrst zombie.
 * @param N number of zombies
 * @param name zombie names
 * @return the pointer to the ﬁrst zombie
 */
Zombie*	zombieHorde( int N , std::string name );
