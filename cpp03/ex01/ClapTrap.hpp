#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define DEFAULT    "\x1b[0m"
#define GREEN   "\x1b[1;32m"
#define YELLOW  "\x1b[1;33m"
#define BLUE    "\x1b[1;34m"
#define MAGENTA "\x1b[1;35m"
#define DENEME "\x1b[0;90m"

class ClapTrap
{
	private:
		std::string	name;
		int			hitPoint;
		int			energyPoint;
		int			attackPoint;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		//Getters
		int	getHitPoint(void) const;
		int	getEnergyPoint(void) const;
		int getAttackPoint (void) const;
		std::string getName(void) const;

		//Setters
		void	setHitPoint(int point);
		void	setEnergyPoint(int point);
		void	setName(std::string name);
		void	setAttackPoint(int point);


};


#endif
