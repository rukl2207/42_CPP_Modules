#pragma once

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T* array, size_t arraySize, void(*func)(const T&))
{
	for (size_t i = 0; i < arraySize ; ++i)
	{
		(*func)(array[i]);
	}
}

template <typename T>
void print_value(const T& value)
{
	std::cout << value << std::endl;
}

template <typename T>
void print_value_multiply_2(const T& value)
{
	std::cout << value * 2 << std::endl;
}

#endif
