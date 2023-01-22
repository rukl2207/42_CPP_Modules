#pragma once

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

class Span
{
 public:
	Span( unsigned int N = 0 );
	Span( const Span& other );
	~Span( void );
	Span& operator= ( const Span& other );

	void	addNumber( int number );
	long	shortestSpan( void );
	long	longestSpan( void );
	void	randomFill( void );

	template<typename Iter>
	void	addRange(Iter begin, Iter end)
	{
		if (this->_vector.size() + std::distance(begin, end) > this->_size)
			throw SpanIsFullException();
		this->_vector.insert(this->_vector.end(), begin, end);

	}

 class SpanIsFullException: public std::exception
 {
	 virtual const char* what() const throw()
	 {
		 return ("Span is full.");
	 }
 };

 class SpanIsSmallException: public std::exception
 {
	 virtual const char* what() const throw()
	 {
		 return ("Span does not have not enough elements.");
	 }
 };

 private:
	std::vector<int>	_vector;
	unsigned int		_size;
};

#endif
