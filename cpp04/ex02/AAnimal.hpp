#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define DEFAULT    "\x1b[0m"
#define GREEN   "\x1b[1;32m"
#define YELLOW  "\x1b[1;33m"
#define BLUE    "\x1b[1;34m"
#define MAGENTA "\x1b[1;35m"

class AAnimal
{
	private:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string type);
		virtual void makeSound() const = 0;
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &copy);
		std::string getType() const;
		void setType(std::string type);
		virtual ~AAnimal();
};



#endif
