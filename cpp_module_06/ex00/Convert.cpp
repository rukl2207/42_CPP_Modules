#include "Convert.hpp"

Convert::Convert()
{}

Convert::Convert(char* argv)
{
	if (!checkType(argv))
		throw Convert::WrongInput();
	this->_input = argv;
}

Convert::Convert(const Convert& other)
{
	*this = other;
}

Convert& Convert::operator=(const Convert& other)
{
	this->_input = other._input;
	return *this;
}

Convert::~Convert()
{}

bool Convert::checkType(std::string str)
{
	if (str.length() == 1 && isascii(str[0]))
		return true;
	char *endptr;
	strtod(str.c_str(), &endptr);
	if (*endptr == 0 || (*endptr == 'f' && *(endptr + 1) == 0))
		return true;
	return false;
}

int Convert::toInt() const
{
	return static_cast<int>(toDouble());
}

char Convert::toChar() const
{
	return static_cast<char>(toDouble());
}

float Convert::toFloat() const
{
	return static_cast<float>(toDouble());
}

double Convert::toDouble() const
{
	if (this->_input.length() == 1 && !isdigit(_input[0]))
		return static_cast<double>(_input[0]);
	else
		return atof(this->_input.c_str());
}

void Convert::printInt()
{
	if (isnan(toDouble()) || toDouble() > INT_MAX || toDouble() < INT_MIN)
		std::cout << "int:\t impossible" << std::endl;
	else
		std::cout << "int:\t " << toInt() << std::endl;
}

void Convert::printChar()
{
	if (!isnan(toDouble()) && !isprint(toChar()) && !isinf(toDouble()) && isascii(toDouble()))
		std::cout << "char:\t Non displayable" << std::endl;
	else if (isprint(toChar()))
		std::cout << "char:\t '" << toChar() << "'" << std::endl;
	else
		std::cout << "char:\t impossible" << std::endl;
}

void Convert::printFloat()
{
	if (toFloat() - toInt() == 0)
		std::cout << "float:\t " << toFloat() << ".0f" << std::endl;
	else
		std::cout << "float:\t " << toFloat() << "f" << std::endl;
}

void Convert::printDouble()
{
	if (toDouble() - toInt() == 0)
		std::cout << "double:\t " << toDouble() << ".0" << std::endl;
	else
		std::cout << "double:\t " << toDouble() << std::endl;
}

void Convert::printAll()
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}

const char* Convert::WrongInput::what() const throw()
{
	return "The input parameter should be char, int, float or double";
}
