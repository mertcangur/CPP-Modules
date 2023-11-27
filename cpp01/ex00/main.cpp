#include "Zombie.hpp"

int main()
{
	Zombie *zmb;

	zmb = newZombie("newZombie");
	zmb->announce();
	randomChump("randomChump");
	delete zmb;
}
