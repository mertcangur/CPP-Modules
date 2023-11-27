#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define DEFAULT    "\x1b[0m"
#define GREEN   "\x1b[1;32m"
#define YELLOW  "\x1b[1;33m"
#define BLUE    "\x1b[1;34m"
#define MAGENTA "\x1b[1;35m"
#define DENEME "\x1b[0;90m"

class Cat:public Animal
{
	private:
		Brain *brain;
		std::string type;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);
		void makeSound() const;
		std::string getType() const;
		~Cat();
};



#endif
