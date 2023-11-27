#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << CYAN << "Dog "<< BLUE << "constructor called" << DEFAULT << std::endl;
}

Dog::Dog(std::string type)
{
	this->type = type;
	this->brain = new Brain();
	std::cout << CYAN << "Dog "<< BLUE << "constructor called" << DEFAULT << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << CYAN << "Dog "<< BLUE << "copy constructor called" << DEFAULT << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
	this->brain = new Brain(*copy.brain);
	this->type = copy.type;
	std::cout << CYAN << "Dog "<< BLUE << "operator= called" << DEFAULT << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << DEFAULT << std::endl;
}

std::string Dog::getType() const
{
	return (Animal::getType());
}

Dog::~Dog()
{
	std::cout << CYAN << "Dog "<< BLUE << "destructor called" << DEFAULT << std::endl;
	delete this->brain;
}
