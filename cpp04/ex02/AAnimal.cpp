#include "AAnimal.hpp"

AAnimal::AAnimal() : type("animal")
{
	std::cout << CYAN << "AAnimal " << BLUE <<"constructor called" << DEFAULT <<std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << CYAN << "AAnimal " << BLUE <<"constructor called" << DEFAULT << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	this->type = copy.type;
	std::cout << CYAN << "AAnimal " << BLUE <<"copy constructor called" << DEFAULT << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	this->type = copy.type;
	std::cout << CYAN << "AAnimal " << BLUE <<"operator= called" << DEFAULT << std::endl;
	return (*this);
}

void AAnimal::makeSound() const
{
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAA" << DEFAULT << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::setType(std::string type)
{
	this->type = type;
}

AAnimal::~AAnimal()
{
	std::cout << CYAN << "AAnimal " << BLUE <<"destructor called" << DEFAULT << std::endl;
}
