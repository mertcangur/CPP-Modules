#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
	private:
		Brain *brain;
		std::string type;
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
