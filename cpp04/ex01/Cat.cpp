#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << CYAN << "Cat " << BLUE << "constructor called" << DEFAULT << std::endl;
}

Cat::Cat(std::string type)
{
	this->type = type;
	this->brain = new Brain();
	std::cout << CYAN <<"Cat " << BLUE <<"constructor called" << DEFAULT << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << CYAN <<"Cat " << BLUE << "copy constructor called" << DEFAULT << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	this->type = copy.getType();
	this->brain = new Brain(*copy.brain);
	std::cout << CYAN <<"Cat " << BLUE << "operator= called" << DEFAULT << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << DEFAULT << std::endl;
}

std::string Cat::getType() const
{
	return (Animal::getType());
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << CYAN <<"Cat " << BLUE << "destructor called" << DEFAULT << std::endl;
}
