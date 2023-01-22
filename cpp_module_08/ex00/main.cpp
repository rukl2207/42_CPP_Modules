#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <deque>


void test_vector( void )
{
	std::vector<int>			cont;
	std::vector<int>::iterator	tmp;


	for (int i = 0; i < 100; i += 2)
		cont.push_back(i);
	std::cout << std::endl << "======= test_vector ============" << std::endl;
	for (int i = 0; i <= 10; ++i)
	{
		std::cout << "--------------------------------" << std::endl;
		try
		{
			std::cout << "Search value:\t" << i * i << std::endl;
			tmp = easyfind(cont, i * i);
			std::cout << "Found value:\t" << *tmp << std::endl;
			std::cout << "Success!" << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
			std::cerr << "Failure!" << std::endl;
		}
	}
}

void test_list( void )
{
	std::list<int>				cont;
	std::list<int>::iterator	tmp;


	for (int i = 0; i < 10; i += 2)
		cont.push_back(i);
	std::cout << std::endl << "======= test_list ==============" << std::endl;
	for (int i = 0; i <= 4; ++i)
	{
		std::cout << "--------------------------------" << std::endl;
		try
		{
			std::cout << "Search value:\t" << i * i << std::endl;
			tmp = easyfind(cont, i * i);
			std::cout << "Found value:\t" << *tmp << std::endl;
			std::cout << "Success!" << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
			std::cerr << "Failure!" << std::endl;
		}
	}
}

void test_set( void )
{
	std::set<int>			cont;
	std::set<int>::iterator	tmp;


	for (int i = 0; i < 10; i += 2)
		cont.insert(i);
	std::cout << std::endl << "======= test_set ===============" << std::endl;
	for (int i = 0; i <= 4; ++i)
	{
		std::cout << "--------------------------------" << std::endl;
		try
		{
			std::cout << "Search value:\t" << i * i << std::endl;
			tmp = easyfind(cont, i * i);
			std::cout << "Found value:\t" << *tmp << std::endl;
			std::cout << "Success!" << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
			std::cerr << "Failure!" << std::endl;
		}
	}
}

void test_deque( void )
{
	std::deque<int>			cont;
	std::deque<int>::iterator	tmp;


	for (int i = 0; i < 10; i += 2)
		cont.push_back(i);
	std::cout << std::endl << "======= test_deque =============" << std::endl;
	for (int i = 0; i <= 4; ++i)
	{
		std::cout << "--------------------------------" << std::endl;
		try
		{
			std::cout << "Search value:\t" << i * i << std::endl;
			tmp = easyfind(cont, i * i);
			std::cout << "Found value:\t" << *tmp << std::endl;
			std::cout << "Success!" << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
			std::cerr << "Failure!" << std::endl;
		}
	}
}

int main( void )
{
	test_vector();
	test_list();
	test_set();
	test_deque();

	return (0);
}

