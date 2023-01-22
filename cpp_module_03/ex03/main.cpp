#include "DiamondTrap.hpp"

int main()
{
	{
		std::cout << "------------ ClapTrap ------------" << std::endl;
		ClapTrap a("Adam");
		ClapTrap b("Bobby");

		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		std::cout << "--- hitpoints " << b.getName() << " = " << b.getHitPoints() << std::endl;
		b.beRepaired(20);
		std::cout << "--- hitpoints " << b.getName() << " = " << b.getHitPoints() << std::endl;
	}

	{
		std::cout << std::endl << "------------ ScavTrap ------------" << std::endl;
		ScavTrap a("Jim");
		ScavTrap b("Robby");

		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
		a.beRepaired(100);
		std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
		a.guardGate();
	}

	{
		std::cout << std::endl << "------------ FragTrap ------------" << std::endl;
		FragTrap a("Brian");
		ScavTrap b("Carl");

		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
		a.beRepaired(30);
		std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
		a.highFivesGuys();
		b.guardGate();
	}

	{
		std::cout << std::endl << "------------ DiamondTrap ------------" << std::endl;
		DiamondTrap a("Eric");
		DiamondTrap b("Will");
		std::cout << "------------" << std::endl;

		b.attack(a.getName());
		a.takeDamage(b.getAttackDamage());
		std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
		a.beRepaired(50);
		std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
		a.whoAmI();
		a.guardGate();
		a.highFivesGuys();
		std::cout << "------------" << std::endl;
	}

	return (0);
}
