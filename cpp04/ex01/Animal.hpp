#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define DEFAULT    "\x1b[0m"
#define GREEN   "\x1b[1;32m"
#define YELLOW  "\x1b[1;33m"
#define BLUE    "\x1b[1;34m"
#define MAGENTA "\x1b[1;35m"

class Animal
{
	private:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		virtual void makeSound() const;
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		std::string getType() const;
		virtual ~Animal();
};



#endif
