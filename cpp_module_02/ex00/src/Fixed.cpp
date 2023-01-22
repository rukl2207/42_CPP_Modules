#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fp_value = 0;
}

Fixed::Fixed( const Fixed& fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator= ( const Fixed& fixed )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		_fp_value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp_value);

}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fp_value = raw;

}
