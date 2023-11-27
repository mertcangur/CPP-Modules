#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << MAGENTA << "ScavTrap "<< BLUE << "Default constructor called" << DEFAULT << std::endl;
	this->setEnergyPoint(50);
	this->setHitPoint(100);
	this->setName("Mortal");
	this->setAttackPoint(20);
}

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
	std::cout << MAGENTA <<"ScavTrap "<< BLUE << "String constructor called"<< DEFAULT << std::endl;
	setEnergyPoint(50);
	setHitPoint(100);
	setName(name);
	setAttackPoint(20);
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << MAGENTA <<"ScavTrap " << BLUE << "Copy constructor called"<< DEFAULT << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << MAGENTA <<"ScavTrap " << BLUE <<"Copy assigment operator called"<< DEFAULT << std::endl;
	setName(other.getName());
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if(getHitPoint() > 0 && getEnergyPoint() > 0)
	{
		setEnergyPoint(getEnergyPoint() - 1);
		std::cout << MAGENTA << "ScavTrap " << RED <<getName() << " attacks " << target << " , causing " << getAttackPoint() << " points of damage" << DENEME <<"// Health = " << getHitPoint() << " , Energy = "<< getEnergyPoint() << DEFAULT << std::endl;
	}
	else if( getHitPoint() <= 0)
		std::cout << MAGENTA <<"ScavTrap "<< RED << getName() << " is death :(" << DEFAULT << std::endl;
	else
		std::cout<< MAGENTA << "ScavTrap " << RED << getName() << "'s out of energy" << DEFAULT <<std::endl;
}


void ScavTrap::guardGate()
{
	std::cout<< MAGENTA << "ScavTrap "<< YELLOW <<getName() << " in Gate keeper mode." << DEFAULT <<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << CYAN << "ScavTrap " << BLUE << "Destructor called" << DEFAULT << std::endl;
}
