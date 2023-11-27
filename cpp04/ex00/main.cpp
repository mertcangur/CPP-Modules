#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
    const WrongAnimal * k = new WrongCat();

	Dog a;
	{
		Dog b = a;
	}


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
    std::cout << "Wrongcat Test" << std::endl;

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();

	delete meta;
	delete j;
	delete i;
	return 0;
}
