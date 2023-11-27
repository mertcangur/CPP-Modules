#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define DEFAULT    "\x1b[0m"
#define GREEN   "\x1b[1;32m"
#define YELLOW  "\x1b[1;33m"
#define BLUE    "\x1b[1;34m"
#define MAGENTA "\x1b[1;35m"

class WrongCat:public WrongAnimal
{
	private:
		std::string type;
	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &copy);
		void makeSound() const;
		std::string getType() const;
		~WrongCat();
};

#endif
