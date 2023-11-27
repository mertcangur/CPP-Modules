#include "Cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	this->idea = new Brain();
	std::cout << CYAN << "Cat " << BLUE << "constructor called" << DEFAULT << std::endl;
}

Cat::Cat(std::string type)
{
	this->setType(type);
	this->idea = new Brain();
	std::cout << CYAN <<"Cat " << BLUE <<"constructor called" << DEFAULT << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->setType(copy.getType());
	this->idea = new Brain();
	*this = copy;
	std::cout << CYAN <<"Cat " << BLUE << "copy constructor called" << DEFAULT << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	this->setType(copy.getType());
	this->idea = new Brain();
	std::cout << CYAN <<"Cat " << BLUE << "operator= called" << DEFAULT << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << DEFAULT << std::endl;
}

std::string Cat::getType() const
{
	return (AAnimal::getType());
}

Cat::~Cat()
{
	delete this->idea;
	std::cout << CYAN <<"Cat " << BLUE << "destructor called" << DEFAULT << std::endl;
}
