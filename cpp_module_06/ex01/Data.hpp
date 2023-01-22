#pragma once

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>
#include <cstdint>

struct Data
{
	std::string	name;
	char		level;
	int			x;
	float		y;
	double		z;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
