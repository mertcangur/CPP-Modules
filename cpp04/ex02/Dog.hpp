#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog:public AAnimal
{
	private:
		Brain *idea;
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		void makeSound() const;
		std::string getType() const;
		~Dog();

};

#endif
