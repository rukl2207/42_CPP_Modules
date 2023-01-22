#include <iostream>

int main( void )
{
	std::string	stringValue = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringValue;
	std::string	&stringREF = stringValue;

	std::cout << "The memory address of the string variable:\t"
		<< &stringValue << std::endl \
		<< "The memory address held by stringPTR:\t\t" \
		<< stringPTR << std::endl \
		<< "The memory address held by stringREF:\t\t" \
		<< &stringREF << std::endl \
		<< "The value of the string variable:\t\t" \
		<< stringValue << std::endl \
		<< "The value pointed to by stringPTR:\t\t" \
		<< *stringPTR << std::endl \
		<< "The value pointed to by stringREF:\t\t" \
		<< stringREF << std::endl;


	return (EXIT_SUCCESS);
}
