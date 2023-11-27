#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	i = 0;
	Zombie *zmb;

	zmb = new Zombie[N];

	while(i < N)
	{
		zmb[i] = Zombie(name);
		i++;
	}
	return (zmb);
}
