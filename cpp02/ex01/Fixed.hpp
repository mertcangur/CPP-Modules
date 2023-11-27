#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int number;
		static const int fractional_bit;
	public:
		Fixed();
		Fixed(int inumber);
		Fixed(float fnumber);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);

		int toInt( void ) const;
		float toFloat( void ) const;
		int getNumber( void ) const;
		void setNumber( int const raw );

		~Fixed();

};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);


#endif
