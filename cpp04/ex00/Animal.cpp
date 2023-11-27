#include "Animal.hpp"

Animal::Animal() : type("animal")
{
	std::cout << CYAN << "Animal " << BLUE <<"constructor called" << DEFAULT <<std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << CYAN << "Animal " << BLUE <<"constructor called" << DEFAULT  << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
	std::cout << CYAN << "Animal " << BLUE <<"copy constructor called" << DEFAULT << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	std::cout << CYAN << "Animal " << BLUE <<"operator= called" << DEFAULT << std::endl;

	return (*this);
}

void Animal::makeSound() const
{
	std::cout << MAGENTA << "AAAAAAAAAAAAAAAAAAAAAAAAAAA" << DEFAULT << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << CYAN << "Animal " << BLUE <<"destructor called" << DEFAULT << std::endl;
}
