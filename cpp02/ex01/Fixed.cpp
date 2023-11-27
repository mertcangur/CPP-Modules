#include "Fixed.hpp"

const int Fixed::fractional_bit = 8;
Fixed::Fixed()
{
	std::cout << "Default Construtor called" << std::endl;
}

Fixed::Fixed(int inumber)
{
	std::cout << "Int constructor called" << std::endl;

	setNumber(inumber * (1 << fractional_bit));
}

Fixed::Fixed(float fnumber)
{
	std::cout << "Float constructor called" << std::endl;
	setNumber((int)roundf(fnumber * (1 << this->fractional_bit)));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called" << std::endl;

	setNumber(other.getNumber());

	return *this;
}

int Fixed::toInt( void ) const
{
	return  getNumber() / (1 << fractional_bit);
}

float Fixed::toFloat( void ) const
{
	return  (float)getNumber() / (1 << fractional_bit);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}


int Fixed::getNumber( void ) const
{
	return (number);
}

void Fixed::setNumber( int const raw)
{
	this->number = raw;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

}
