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


	// comparison operators
	bool	operator> ( const Fixed& fixed ) const;
	bool	operator< ( const Fixed& fixed ) const;
	bool	operator>= ( const Fixed& fixed ) const;
	bool	operator<= ( const Fixed& fixed ) const;
	bool	operator== ( const Fixed& fixed ) const;
	bool	operator!= ( const Fixed& fixed ) const;

	// arithmetic operators
	Fixed	operator+ ( const Fixed& fixed ) const;
	Fixed	operator- ( const Fixed& fixed ) const;
	Fixed	operator* ( const Fixed& fixed ) const;
	Fixed	operator/ ( const Fixed& fixed ) const;

	// increment and decrement operators
	Fixed&	operator++( void );
	Fixed&	operator--( void );
	Fixed	operator++( int );
	Fixed	operator--( int );


	// A static member function min that takes as parameters two references on
	// ﬁxed-point numbers,  and  returns  a  reference  to  the  smallest  one
	static Fixed&	min( Fixed& a, Fixed& b);

	//A static member function min that takes as parameters two references to
	// constant ﬁxed-point numbers, and returns a reference to the smallest one
	static const Fixed&	min( const Fixed& a, const Fixed& b);

	// A static member function max that takes as parameters two references on
	// ﬁxed-point numbers,  and  returns  a  reference  to  the  greatest  one
	static Fixed&	max( Fixed& a, Fixed& b);

	// A static member function max that takes as parameters two references to
	// constant ﬁxed-point numbers, and returns a reference to the greatest one
	static const Fixed&	max( const Fixed& a, const Fixed& b);

 private:
	// ﬁxed-point number value
	int _fp_value;

	// number of fractional bits
	static const int _fract_bits = 8;
};

std::ostream& operator<< (std::ostream &out, const Fixed& fixed);

#endif
