#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
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
