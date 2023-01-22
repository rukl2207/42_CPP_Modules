#include "Bureaucrat.hpp"

void test_constructor_copy( void )
{
	std::cout << "===== Test constructor copy =====" << std::endl;
	Bureaucrat a1;
	std::cout << a1 << std::endl;
	Bureaucrat a2("Jim");
	std::cout << a2 << std::endl;
	Bureaucrat a3("Ted", 50);
	std::cout << a3 << std::endl;
	Bureaucrat a4(a3);
	std::cout << a4 << std::endl;
	a1 = a4;
	std::cout << a1 << std::endl;

	std::cout << "=================================" << std::endl << std::endl;
}

void test_grade( void )
{
	std::cout << "========== Test grade ===========" << std::endl;
	int arr[] = {-2, -1, 0, 1, 2, 3, 100, 148, 149, 150, 151, 152};
	int arr_len = sizeof(arr) / sizeof (arr[0]);
	for (int i = 0; i < arr_len; ++i)
	{
		std::cout << "number = " << arr[i] << "\t";
		try
		{
			Bureaucrat bureaucrat("Jim", arr[i]);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception& exc)
		{
			std::cerr << exc.what() << std::endl;
		}
	}
	std::cout << "=================================" << std::endl << std::endl;
}

void test_increment_decrement( void )
{
	std::cout << "======== Test increment =========" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Jim", 2);
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=================================" << std::endl << std::endl;
	std::cout << "======== Test decrement =========" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Ted", 149);
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=================================" << std::endl << std::endl;
}

int main(void)
{
	test_constructor_copy();
	test_grade();
	test_increment_decrement();
	return (0);
}
