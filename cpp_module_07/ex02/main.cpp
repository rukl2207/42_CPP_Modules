#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10

void test ( void )
{
	Array<float> arr0;
	std::cout << arr0.size() << std::endl;
	arr0.printArray();

	Array<float> arr1(5);
	std::cout << arr1.size() << std::endl;
	arr1.printArray();
	for (int i = 0; i < 5; ++i)
	{
		arr1[i] = i;
	}
	arr1.printArray();

	arr0 = arr1;
	arr0.printArray();
	Array<float> arr2(arr1);
	arr2.printArray();
	std::cout << arr2[3] << std::endl;
	arr2[3] = 10;
	std::cout << arr2[3] << std::endl;
	arr2.printArray();

	try
	{
		arr1[8] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void test_subject ( void )
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	//SCOPE
	{
		numbers.printArray();
		Array<int> tmp = numbers;
		tmp.printArray();
		Array<int> test(tmp);
		test.printArray();
		Array<int> test2;

		test2.printArray();
		test2 = test;
		test2.printArray();
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
}

int main(int, char**)
{
	std::cout << "==========================================="<< std::endl;
	test();
	std::cout << "==========================================="<< std::endl;
	test_subject();
	std::cout << "==========================================="<< std::endl;

//	system("leaks array");
	return 0;
}
