#include "Zombie.hpp"

int main()
{
	int	i = 0;
	Zombie *zmb;

	zmb = zombieHorde(4,"mike");

	while(i < 4)
	{
		zmb[i].announce();
		i++;
	}
	delete[] zmb;
}
