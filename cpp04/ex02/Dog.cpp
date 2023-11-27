#include "Dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	this->idea = new Brain();
	std::cout << CYAN << "Dog "<< BLUE << "constructor called" << DEFAULT << std::endl;
}

Dog::Dog(std::string type)
{
	this->setType(type);
	this->idea = new Brain();
	std::cout << CYAN << "Dog "<< BLUE << "constructor called" << DEFAULT << std::endl;
}

Dog::Dog(const Dog &copy)
{

	*this = copy;
	this->idea = new Brain();
	std::cout << CYAN << "Dog "<< BLUE << "copy constructor called" << DEFAULT << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	this->idea = new Brain();
	this->setType(copy.getType());
	std::cout << CYAN << "Dog "<< BLUE << "operator= called" << DEFAULT << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << DEFAULT << std::endl;
}

std::string Dog::getType() const
{
	return (AAnimal::getType());
}

Dog::~Dog()
{
	std::cout << CYAN << "Dog "<< BLUE << "destructor called" << DEFAULT << std::endl;
	delete this->idea;
}
