#pragma once

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

class ValueNotFound: public std::exception
{
 public:
	virtual const char* what() const throw()
	{
		return ("The value not found in the container");
	}
};

template <typename T>
typename T::iterator easyfind( T& container, int value )
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw ValueNotFound();
	return iter;
}

#endif
