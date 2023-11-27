#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
	std::cout << CYAN << "Cat " << BLUE << "constructor called" << DEFAULT << std::endl;
}

Cat::Cat(std::string type)
{
	this->type = type;
	std::cout << CYAN <<"Cat " << BLUE <<"constructor called" << DEFAULT <<std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	std::cout << CYAN <<"Cat " << BLUE << "copy constructor called"<< DEFAULT << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	std::cout << CYAN <<"Cat " << BLUE << "operator= called"<< DEFAULT << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << MAGENTA <<"Meow Meow"<< DEFAULT << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

Cat::~Cat()
{
	std::cout << CYAN <<"Cat " << BLUE << "destructor called" << DEFAULT <<std::endl;
}
