#include "../inc/Zombie.hpp"

int	zombie_test( void )
{
	Zombie zombie_0;
	zombie_0.announce();

	Zombie zombie_1 = Zombie();
	zombie_1.announce();

	Zombie zombie_2 = Zombie("Adam");
	zombie_2.announce();

	Zombie *zombie_3 = newZombie("Billy");
	zombie_3->announce();
	delete(zombie_3);

	Zombie *zombie_4 = new Zombie("Clara");
	zombie_4->announce();
	delete(zombie_4);

	randomChump("Denny");

	return (0);
}

int	main( void )
{
	zombie_test();
//	std::cout << std::endl << "----------------------------------" << std::endl;
//	system("leaks zombie");
//	std::cout << std::endl << "----------------------------------" << std::endl;
	return (0);
}
