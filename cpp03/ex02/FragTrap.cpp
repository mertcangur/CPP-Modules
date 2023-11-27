#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << MAGENTA <<"FragTrap "<< BLUE << "Default constructor called" << DEFAULT <<std::endl;
	this->setEnergyPoint(50);
	this->setHitPoint(100);
	this->setName("Mortal");
	this->setAttackPoint(20);
}

FragTrap::FragTrap(std::string name): ClapTrap()
{
	std::cout << MAGENTA <<"FragTrap "<< BLUE <<"Default string constructor called"<< DEFAULT << std::endl;
	this->setEnergyPoint(100);
	this->setHitPoint(100);
	this->setName(name);
	this->setAttackPoint(30);
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << MAGENTA <<"FragTrap " << BLUE << "Copy constructor called"<< DEFAULT << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << MAGENTA <<"FragTrap " << BLUE << "Copy assigment operator called"<< DEFAULT << std::endl;

	this->setName(other.getName());
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << MAGENTA <<"FragTrap " << BLUE << getName() << " give me five buddy" << DEFAULT <<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << MAGENTA <<"FragTrap " << BLUE << "Destructor called" << std::endl;
}
