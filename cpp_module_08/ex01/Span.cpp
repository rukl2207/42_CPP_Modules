#include "Span.hpp"

Span::Span(unsigned int N):
	_size(N)
{}

Span::Span(const Span& other):
	_vector(other._vector),
	_size(other._size)
{}

Span::~Span()
{}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return (*this);
	this->_size = other._size;
	this->_vector = other._vector;
	return (*this);
}

void Span::addNumber(int number)
{
	if (this->_vector.size() < this->_size)
		this->_vector.push_back(number);
	else
		throw Span::SpanIsFullException();
}

long Span::shortestSpan()
{
	if (this->_size <= 1)
		throw Span::SpanIsSmallException();
	std::sort(this->_vector.begin(), this->_vector.end());
	long shortest = static_cast<long>(this->_vector[1]) - static_cast<long>(this->_vector[0]);
	for (size_t i = 1; i < this->_vector.size() - 1 ; ++i)
		if (static_cast<long>(this->_vector[i + 1]) - static_cast<long>(this->_vector[i]) < shortest)
			shortest = static_cast<long>(this->_vector[i + 1]) - static_cast<long>(this->_vector[i]);
	return (shortest);
}

long Span::longestSpan()
{
	if (this->_size <= 1)
		throw Span::SpanIsSmallException();
	long minValue = *std::min_element(this->_vector.begin(), this->_vector.end());
	long maxValue = *std::max_element(this->_vector.begin(), this->_vector.end());
	return (static_cast<long>(maxValue) - static_cast<long>(minValue));
}

void Span::randomFill()
{
	srand(time(NULL));
	for (unsigned int i = 0; i < this->_size; ++i)
		this->_vector.push_back(rand());
}
