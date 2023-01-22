#include "../inc/Zombie.hpp"

Zombie*	zombieHorde( int N , std::string name )
{
	if (N <= 0)
	{
		std::cout << "A zombie horde cannot consist of less than 1 zombie." << std::endl;
		return (0);
	}
	if (!name[0])
		name = "noname";
	Zombie *new_zombies = new Zombie[N];
	if (!new_zombies)
	{
		std::cout << "Memory allocation of the zombie horde failed." << std::endl;
		return (0);
	}
	for (int i = 0; i < N; i++)
		new_zombies[i].setName(name);
	return (new_zombies);
}
