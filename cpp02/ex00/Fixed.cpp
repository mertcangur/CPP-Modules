#include "Fixed.hpp"

const int Fixed::fractional_bit = 8;

Fixed::Fixed(): number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	setRawBits(other.getRawBits());
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number >> this->fractional_bit);
}

void Fixed::setRawBits( int const raw)
{
	this->number = raw << this->fractional_bit;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
