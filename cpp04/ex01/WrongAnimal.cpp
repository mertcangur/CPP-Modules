#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << CYAN <<"WrongAnimal "<< BLUE << "constructor called"<< DEFAULT << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << CYAN <<"WrongAnimal "<< BLUE << "constructor called" << DEFAULT<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << CYAN <<"WrongAnimal "<< BLUE << "copy constructor called" << DEFAULT << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << CYAN <<"WrongAnimal "<< BLUE << "operator= called" << DEFAULT<<std::endl;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << RED <<"wrong animaaaal" << DEFAULT <<std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN <<"WrongAnimal "<< BLUE << "destructor called" << DEFAULT << std::endl;
}
