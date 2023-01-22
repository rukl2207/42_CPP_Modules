#include "../inc/Zombie.hpp"

int	zombieHordeTest( void )
{
	const int 			zombieAmount[] = { 1, 2, 10, 1,1,0,-1, 1};
	const int 			len = sizeof(zombieAmount) / sizeof(zombieAmount[0]);
	const std::string	zombieNames[len] = {"Adam", "Bob", "(x_x)", " ", "", "a", "b"};

	for (int j = 0; j < len ; ++j)
	{
		std::cout << "TEST " << j + 1 << ". Amount: <" << zombieAmount[j] \
				<< ">. Name <" << zombieNames[j] << ">" << std::endl;
		Zombie	*zombies = zombieHorde(zombieAmount[j], zombieNames[j]);
		if (!zombies)
		{
			std::cout << "Error." << std::endl << std::endl;
			continue;
		}
		for (int i = 0; i < zombieAmount[j]; ++i)
		{
			std::cout << i + 1 << ": ";
			zombies[i].announce();
		}
		delete[] zombies;
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}

int	main( void )
{
	zombieHordeTest();
//	std::cout << std::endl << "----------------------------------" << std::endl;
//	system("leaks zombie");
//	std::cout << std::endl << "----------------------------------" << std::endl;
	return (0);
}
