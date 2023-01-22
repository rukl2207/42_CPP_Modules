#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Adam");
	ClapTrap b("Bob");

	std::cout << "---------" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "--- hitpoints " << b.getName() << " = " << b.getHitPoints() << std::endl;
	b.beRepaired(5);
	std::cout << "--- hitpoints " << b.getName() << " = " << b.getHitPoints() << std::endl;

	std::cout << "---------" << std::endl;
	b.setAttackDamage(3);
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
	a.beRepaired(2);
	std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;

	std::cout << "---------" << std::endl;
	b.setAttackDamage(12);
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;

	std::cout << "---------" << std::endl;
	ClapTrap c("Jim");
	ClapTrap d(c);
	d.setName("John");
	d.setAttackDamage(1);
	std::cout << "--- attack " << d.getName() << " = " << d.getAttackDamage() << std::endl;

	return (0);
}
