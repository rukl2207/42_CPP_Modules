#include <stack>
#include "Span.hpp"

void test_subject( void )
{

	Span sp = Span(5);

	std::cout << "======= test subject ============" << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "=================================" << std::endl << std::endl;
}

void test_big( void )
{
	Span sp1 = Span(10000);

	std::cout << "======= test big ================" << std::endl;
	sp1.randomFill();
	std::cout << "sp1\t" << &sp1 << std::endl;
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	std::cout << "=================================" << std::endl << std::endl;

	std::cout << "======= test copy ===============" << std::endl;
	Span sp2(sp1);
	std::cout << "sp2\t" << &sp2 << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << "=================================" << std::endl << std::endl;

	std::cout << "======= test assignment =========" << std::endl;
	Span sp3 = sp1;
	std::cout << "sp3\t" << &sp3 << std::endl;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	std::cout << "=================================" << std::endl << std::endl;
}

void test_exception( void )
{
	std::cout << "======= test exception full =====" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(100);
	}
	catch (std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "=================================" << std::endl << std::endl;

	std::cout << "======= test exception empty ====" << std::endl;
	Span sp0 = Span();
	sp0.randomFill();
	try
	{
		std::cout << sp0.shortestSpan() << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	try
	{
		std::cout << sp0.longestSpan() << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "=================================" << std::endl << std::endl;

	std::cout << "======= test exception one ======" << std::endl;
	Span sp1 = Span(1);
	sp1.randomFill();
	try
	{
		std::cout << sp1.shortestSpan() << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	try
	{
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "=================================" << std::endl << std::endl;
}

void test_range( void )
{
	std::cout << "======= test range ==============" << std::endl;
	std::vector<int> v1(1000);
//	std::vector<int>::iterator it;
	srand(time(NULL));
	std::generate(v1.begin(), v1.end(), std::rand);
//	std::cout << "vector:" << std::endl;
//	for (it = v1.begin(); it != v1.end(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;

	Span sp(1000);
	sp.addRange(v1.begin(), v1.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "======= test exception full =====" << std::endl;
	try
	{
		sp.addRange(v1.begin(), v1.end());
	}
	catch (std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "=================================" << std::endl << std::endl;
}

int main( void )
{
	test_subject();
	test_big();
	test_exception();
	test_range();

	return (0);
}
