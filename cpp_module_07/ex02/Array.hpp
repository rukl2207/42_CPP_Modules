#pragma once

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>

template <class T>
class Array
{
 public:
	Array<T>( void ):
	    _array(NULL),
		_sizeArray(0)
	{
		std::cout << "Array default constructor " << this << std::endl;
	}

	Array<T>( const unsigned int size )
	{
		std::cout << "Array size constructor " << this << std::endl;
		if (size < 0)
			throw std::overflow_error("Index out of bounds");
		this->_sizeArray = size;
		std::cout << this->_sizeArray << std::endl;

		this->_array = new T[this->_sizeArray];
	}

	Array<T>( const Array<T>& other ):
	    _array(NULL),
		_sizeArray(0)
	{
		std::cout << "Array copy constructor " << this << std::endl;
		*this = other;
	}

	~Array<T>( void )
	{
		if (this->_sizeArray > 0)
			delete [] this->_array;
		std::cout << "Array destructor " << this << std::endl;

	}

	Array<T>& operator= (const Array<T>& other)
	{
		std::cout << "Array copy assignment operator " << this << std::endl;
		if (this == &other)
			return *this;
		if(this->_sizeArray > 0)
			delete [] this->_array;
		this->_sizeArray = other.size();
		this->_array = new T[this->_sizeArray];
		for (unsigned int i = 0; i < this->_sizeArray; ++i)
			this->_array[i] = other[i];
		return *this;
	}

	T& operator[] ( const unsigned int index) const
	{
		if (index >= this->_sizeArray || index < 0)
			throw std::overflow_error("Index out of bounds");
		return this->_array[index];
	}

	unsigned int size( void ) const
	{
		return this->_sizeArray;
	}

	void printArray( void ) const
	{
		std::cout << "Array print " << this << std::endl;
		for (unsigned int i = 0; i < this->_sizeArray; ++i)
			std::cout << this->_array[i] << " ";
		if (this->_sizeArray == 0)
			std::cout << "Array is empty.";
		std::cout << std::endl;
	}

 private:
	T				*_array;
	unsigned int	_sizeArray;
};

#endif
