#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Adam");
	ScavTrap b("Bob");

	std::cout << "---------" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "--- hitpoints " << b.getName() << " = " << b.getHitPoints() << std::endl;
	b.beRepaired(10);
	std::cout << "--- hitpoints " << b.getName() << " = " << b.getHitPoints() << std::endl;
	a.guardGate();
	a.guardGate();

	std::cout << "---------" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
	a.beRepaired(5);
	std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;

	std::cout << "---------" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;

	std::cout << "---------" << std::endl;
	ScavTrap c("Jim");
	ScavTrap d(c);
	d.setName("John");
	d.setAttackDamage(100);
	std::cout << "--- attack " << d.getName() << " = " << d.getAttackDamage() << std::endl;

	return (0);
}
