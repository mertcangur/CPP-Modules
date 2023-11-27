#include "FragTrap.hpp"

int main()
{
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("hoe");
	FragTrap johny;

	//john.attack(NULL);
	john.attack("Bart");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");
	john.attack("Homer");

	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	johny.attack("zb");
	johny.highFivesGuys();
}
