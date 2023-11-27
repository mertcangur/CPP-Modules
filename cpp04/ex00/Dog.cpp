#include "Dog.hpp"

Dog::Dog(): type("Dog")
{
	std::cout << CYAN << "Dog "<< BLUE << "constructor called"<< DEFAULT << std::endl;
}

Dog::Dog(std::string type)
{
	this->type = type;
	std::cout << CYAN << "Dog "<< BLUE << "constructor called"<< DEFAULT << std::endl;

}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
	std::cout << CYAN << "Dog "<< BLUE << "copy constructor called"<< DEFAULT << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	std::cout << CYAN << "Dog "<< BLUE << "operator= called" << DEFAULT << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << MAGENTA << "Woof Woof" << DEFAULT <<std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}

Dog::~Dog()
{
	std::cout << CYAN << "Dog "<< BLUE << "destructor called" << DEFAULT << std::endl;
}
