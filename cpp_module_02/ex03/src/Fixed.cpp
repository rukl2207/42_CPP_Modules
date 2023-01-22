#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;
	this->_fp_value = 0;
}

Fixed::Fixed( const Fixed& fixed )
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed( const int value )
{
//	std::cout << "Int constructor called" << std::endl;
	this->_fp_value = value << this->_fract_bits;
}

Fixed::Fixed( const float value )
{
//	std::cout << "Float constructor called" << std::endl;
	this->_fp_value = (int)roundf(value * (1 << this->_fract_bits));
}

Fixed& Fixed::operator= ( const Fixed& fixed )
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		_fp_value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (this->_fp_value);
}

void Fixed::setRawBits(const int raw)
{
	this->_fp_value = raw;
}

int Fixed::toInt( void ) const
{
	if (_fp_value < 0)
		return -((int) -this->_fp_value >> this->_fract_bits);
	return ((int) this->_fp_value >> this->_fract_bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fp_value / (float)(1 << this->_fract_bits));
}

std::ostream& operator<< (std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed& fixed) const
{
	return (this->_fp_value > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const
{
	return (this->_fp_value < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	return (this->_fp_value >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	return (this->_fp_value <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed) const
{
	return (this->_fp_value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed& fixed) const
{
	return (this->_fp_value != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed& fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed& fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed& fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed& Fixed::operator++()
{
	this->_fp_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(this->_fp_value);
	++(*this);
	return (temp);
}

Fixed& Fixed::operator--()
{
	--_fp_value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(this->_fp_value);
	--(*this);
	return (temp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return ((a <= b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a <= b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a >= b) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a >= b) ? a : b);
}
