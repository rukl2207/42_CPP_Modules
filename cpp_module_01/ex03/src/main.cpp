#include "../inc/Weapon.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int    main( void )
{
	std::cout << "--------- Test HumanA ---------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << "--------- Test HumanB ---------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}