#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("Adam");
	ScavTrap b("Bob");

	std::cout << "---------" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "--- hitpoints " << b.getName() << " = " << b.getHitPoints() << std::endl;
	b.beRepaired(20);
	std::cout << "--- hitpoints " << b.getName() << " = " << b.getHitPoints() << std::endl;
	a.highFivesGuys();

	std::cout << "---------" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;
	a.beRepaired(30);
	std::cout << "=== hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;

	std::cout << "---------" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "--- hitpoints " << a.getName() << " = " << a.getHitPoints() << std::endl;

	std::cout << "---------" << std::endl;
	FragTrap c("Jim");
	FragTrap d(c);
	d.setName("John");
	d.setAttackDamage(100);
	std::cout << "--- attack " << d.getName() << " = " << d.getAttackDamage() << std::endl;
	d.highFivesGuys();

	return (0);
}
