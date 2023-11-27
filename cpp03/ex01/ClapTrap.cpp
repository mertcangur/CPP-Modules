#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Mortal")
{
	std::cout << CYAN << "ClapTrap "<< BLUE << "Default constructor called" << DEFAULT << std::endl;
	setHitPoint(10);
	setEnergyPoint(10);
	setAttackPoint(0);
}

ClapTrap::ClapTrap( std::string name)
{
	std::cout << CYAN <<"ClapTrap "<< BLUE << "String constructor called"<< DEFAULT << std::endl;

	setName(name);
	setHitPoint(10);
	setEnergyPoint(10);
	setAttackPoint(0);
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << CYAN <<"ClapTrap " << BLUE << "Copy constructor called"<< DEFAULT << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << CYAN <<"ClapTrap " << BLUE <<"Copy assigment operator called"<< DEFAULT << std::endl;
	this->setName(other.getName());
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if(getHitPoint() > 0 && getEnergyPoint() > 0)
	{
		setEnergyPoint(getEnergyPoint() - 1);
		std::cout << CYAN << "ClapTrap " << RED <<getName() << " attacks " << target << " , causing " << getAttackPoint() << " points of damage" << DENEME <<"// Health = " << getHitPoint() << " , Energy = "<< getEnergyPoint() << DEFAULT << std::endl;
	}
	else if( getHitPoint() <= 0)
		std::cout << CYAN <<"ClapTrap "<< RED << getName() << " is death :(" << DEFAULT << std::endl;
	else
		std::cout<< CYAN << "ClapTrap " << RED << getName() << "'s out of energy" << DEFAULT <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(getHitPoint() > 0)
	{
		setHitPoint(getHitPoint() - amount);
		std::cout << CYAN << "ClapTrap "<< RED << this->name << " took " << amount << " points of damage" << DENEME << "// Health = " << getHitPoint() << DEFAULT << std::endl;
	}
	else
		std::cout << CYAN << "ClapTrap " << RED << getName() << " is already death" << DEFAULT << std::endl;

	if(getHitPoint() <= 0)
	{
		std::cout << CYAN << "ClapTrap "<< RED << this->name << " is death dude" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(getHitPoint() > 0 && getEnergyPoint() > 0)
	{
		setEnergyPoint(getEnergyPoint() - 1);
		setHitPoint(getHitPoint() + amount);
		std::cout << CYAN << "ClapTrap "<< GREEN << getName() << " repaired himself " << amount << " points"  << DENEME <<" // Health = " << getHitPoint() << " , Energy = "<< getEnergyPoint() << DEFAULT << std::endl;
	}
	else if( getHitPoint() <= 0)
		std::cout << CYAN << "ClapTrap "<< RED << getName() << " is death" << DEFAULT << std::endl;
	else
		std::cout<< CYAN << "ClapTrap " << RED << getName() << "'s out of energy" << DEFAULT <<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << CYAN << "ClapTrap " << BLUE << "Destructor called" << DEFAULT << std::endl;
}

int ClapTrap::getAttackPoint(void) const
{
	return ( this->attackPoint);
}

int ClapTrap::getEnergyPoint(void) const
{
	return ( this->energyPoint );
}

int ClapTrap::getHitPoint(void) const
{
	return ( this->hitPoint );
}

std::string ClapTrap::getName(void) const
{
	return ( this->name );
}

void ClapTrap::setHitPoint(int point)
{
	this->hitPoint = point;
}

void ClapTrap::setEnergyPoint(int point)
{
	this->energyPoint = point;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setAttackPoint(int point)
{
	this->attackPoint = point;
}
