#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
 public:
	// default constructor
	Fixed();

	// copy constructor
	Fixed( const Fixed &fixed );

	// copy assignment operator overload
	Fixed& operator= ( Fixed const& fixed );

	//destructor
	~Fixed();

	// function returns the raw value of the ﬁxed-point value
	int		getRawBits( void ) const;

	// function sets the raw value of the ﬁxed-point number.
	void	setRawBits( int const raw );

 private:
	// ﬁxed-point number value
	int _fp_value;

	// number of fractional bits
	static const int _fract_bits = 8;
};

#endif
