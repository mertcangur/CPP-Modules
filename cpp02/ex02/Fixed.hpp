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
		Fixed(int Inumber);
		Fixed(float Fnumber);
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int toInt( void ) const;
		float toFloat( void ) const;
		int getNumber( void ) const;
		void setNumber( int const raw );

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		Fixed operator+(const Fixed &nbr);
		Fixed operator-(const Fixed &nbr);
		Fixed operator*(const Fixed &nbr);
		Fixed operator/(const Fixed &nbr);

		bool operator!=(const Fixed &nbr);
		bool operator==(const Fixed &nbr);
		bool operator>(const Fixed &nbr);
		bool operator<(const Fixed &nbr);
		bool operator>=(const Fixed &nbr);
		bool operator<=(const Fixed &nbr);

		static Fixed &min(Fixed &nbr1, Fixed &nbr2);
		static Fixed &max(Fixed &nbr1, Fixed &nbr2);
		
		static const Fixed &min(const Fixed &nbr1, const Fixed &nbr2);
		static const Fixed &max(const Fixed &nbr1, const Fixed &nbr2);

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);


#endif
