#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
 public:
	// default constructor
	Fixed();

	// copy constructor
	Fixed( const Fixed &fixed );

	// integer constructor
	Fixed( int const value );

	// float constructor
	Fixed( float const value );

	// copy assignment operator overload
	Fixed& operator= ( Fixed const& fixed );

	//destructor
	~Fixed();

	// function returns the raw value of the ﬁxed-point value
	int		getRawBits( void ) const;

	// function sets the raw value of the ﬁxed-point number.
	void	setRawBits( int const raw );

	// function converts the ﬁxed-point value to a ﬂoating-point value.
	float	toFloat( void ) const;

	// function  converts the ﬁxed-point value to an integer value.
	int		toInt( void ) const;

 private:
	// ﬁxed-point number value
	int _fp_value;

	// number of fractional bits
	static const int _fract_bits = 8;
};

std::ostream& operator<< (std::ostream &out, const Fixed& fixed);

#endif
