#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << CYAN <<"WrongCat " << BLUE << "constructor called" << DEFAULT << std::endl;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
	std::cout << CYAN <<"WrongCat " << BLUE << "constructor called" << DEFAULT <<std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->type = copy.type;
	std::cout << CYAN <<"WrongCat " << BLUE << "copy constructor called" << DEFAULT <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	this->type = copy.type;
	std::cout << CYAN <<"WrongCat " << BLUE << "operator= called" << DEFAULT <<std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << RED <<"Meow Meow"<< DEFAULT << std::endl;
}

std::string WrongCat::getType() const
{
	return (this->type);
}

WrongCat::~WrongCat()
{
	std::cout << CYAN <<"WrongCat " << BLUE << " destructor called" << DEFAULT <<std::endl;
}
