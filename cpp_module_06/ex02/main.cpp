#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>



Base * generate( void )
{
	srand(time(0));
	switch (rand() % 3)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (NULL);
	}
}

void identify( Base* p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown type" << std::endl;

}

void identify( Base& p )
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& exc)
	{}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception& exc)
	{}

	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception& exc)
	{}
}

int main( void )
{
	Base* base = generate();
	std::cout << "identify(Base* p):\t";
	identify(base);
	std::cout << "identify(Base& p):\t";
	identify(*base);
	delete base;
	//	system("leaks base");
	return (0);
}
