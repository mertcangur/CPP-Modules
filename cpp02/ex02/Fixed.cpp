#include "Fixed.hpp"

const int Fixed::fractional_bit = 8;

Fixed::Fixed() : number(0)
{
	
}

Fixed::Fixed(int inumber)
{
	setNumber(inumber * (1 << fractional_bit));
}

Fixed::Fixed(float fnumber)
{
	setNumber((int)roundf(fnumber * (1 << this->fractional_bit)));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
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

}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp.setNumber(this->getNumber());
	this->setNumber(this->getNumber() + 1);
	return (tmp);
}

Fixed Fixed::operator++()
{
	this->setNumber(this->getNumber() + 1);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp.setNumber(this->getNumber());
	this->setNumber(this->getNumber() - 1);
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->setNumber(this->getNumber() - 1);
	return (*this);
}

Fixed &Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	if(nbr1 > nbr2)
		return (nbr2);
	return(nbr1);
}

const Fixed &Fixed::min(const Fixed &nbr1, const Fixed &nbr2)
{
	if(nbr1.getNumber() > nbr2.getNumber())
		return (nbr2);
	return(nbr1);
}

Fixed &Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	if(nbr1 > nbr2)
		return (nbr1);
	return(nbr2);
}

const Fixed &Fixed::max(const Fixed &nbr1, const Fixed &nbr2)
{
	if(nbr1.getNumber() > nbr2.getNumber())
		return (nbr1);
	return(nbr2);
}

bool Fixed::operator!=(const Fixed &nbr)
{
	return ( this->getNumber() != nbr.getNumber());
}

bool Fixed::operator==(const Fixed &nbr)
{
	return ( this->getNumber() ==  nbr.getNumber());
}

bool Fixed::operator>(const Fixed &nbr)
{
	return ( this->getNumber() >  nbr.getNumber());
}

bool Fixed::operator<(const Fixed &nbr)
{
	return ( this->getNumber() <  nbr.getNumber());
}

bool Fixed::operator>=(const Fixed &nbr)
{
	return ( this->getNumber() >=  nbr.getNumber());
}

bool Fixed::operator<=(const Fixed &nbr)
{
	return ( this->getNumber() <=  nbr.getNumber());
}

Fixed Fixed::operator+(const Fixed &nbr)
{
	return( Fixed(this->toFloat() + nbr.toFloat()));
}

Fixed Fixed::operator-(const Fixed &nbr)
{
	return( Fixed(this->toFloat() - nbr.toFloat()));
}

Fixed Fixed::operator*(const Fixed &nbr)
{
	return( Fixed(this->toFloat() * nbr.toFloat()));
}

Fixed Fixed::operator/(const Fixed &nbr)
{
	return( Fixed(this->toFloat() / nbr.toFloat()));
}
