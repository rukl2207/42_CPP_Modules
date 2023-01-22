#include "Bureaucrat.hpp"
#include "Form.hpp"

void test_constructor_copy_bureaucrat( void )
{
	std::cout << "===== Test constructor copy bureaucrat =====" << std::endl;
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

void test_grade_bureaucrat( void )
{
	std::cout << "========== Test grade bureaucrat ===========" << std::endl;
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

void test_increment_decrement_bureaucrat( void )
{
	std::cout << "======== Test increment bureaucrat =========" << std::endl;
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
	std::cout << "======== Test decrement bureaucrat =========" << std::endl;
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

void test_constructor_grade_form( void )
{
	std::cout << "=========== Test form ==========="<< std::endl;
	Form f1;
	std::cout << f1 << std::endl;
	Form f2("F2", 5, 10);
	std::cout << f2 << std::endl;
	Form f3("F3", 50, 70);
	std::cout << f3 << std::endl;
	Bureaucrat b("BILL", 10);
	std::cout << b << std::endl;
	Form f4(f3);
	std::cout << f4 << std::endl;
	f4.beSigned(b);
	std::cout << f4 << std::endl;
	std::cout << f3 << std::endl;
	f1 = f4;
	std::cout << f1 << std::endl;
	std::cout << "=================================" << std::endl << std::endl;

	int arr[] = {-2, -1, 0, 1, 2, 3, 100, 148, 149, 150, 151, 152};
	int arr_len = sizeof(arr) / sizeof (arr[0]);
	for (int i = 0; i < arr_len; ++i)
	{
		std::cout << "number = " << arr[i] << std::endl;
		try
		{
			Form form("FORM_1", arr[i], 10);
			std::cout << form << std::endl;
		}
		catch (std::exception &exc)
		{
			std::cerr << exc.what() << std::endl;
		}
		try
		{
			Form form("FORM_2", 10, arr[i]);
			std::cout << form << std::endl;
		}
		catch (std::exception &exc)
		{
			std::cerr << exc.what() << std::endl;
		}
	}
	std::cout << "=================================" << std::endl << std::endl;
}

void test_sign_form( void )
{
	std::cout << std::endl << "=========== Test sign form ==========="<< std::endl;
	try
	{
		Bureaucrat b("BILL", 10);
		std::cout << b << std::endl;
		Form f0("F0", 10, 20);
		std::cout << f0 << std::endl;
		b.signForm(f0);
		std::cout << f0 << std::endl;
		b.signForm(f0);
		std::cout << std::endl;

		Form f1("F1", 10, 20);
		std::cout << f1 << std::endl;
		f1.beSigned(b);
		std::cout << f1 << std::endl;
		f1.beSigned(b);
		Form f3("F3", 15, 20);
		std::cout << f3 << std::endl;
		f3.beSigned(b);
		std::cout << f3 << std::endl;
		f3.beSigned(b);
		Form f2("F2", 5, 20);
		std::cout << f2 << std::endl;
		f2.beSigned(b);
		std::cout << f2 << std::endl;
		f2.beSigned(b);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=================================" << std::endl << std::endl;
}

int main(void)
{
//	test_constructor_copy_bureaucrat();
//	test_grade_bureaucrat();
//	test_increment_decrement_bureaucrat();

	test_constructor_grade_form();
	test_sign_form();

	return (0);
}
