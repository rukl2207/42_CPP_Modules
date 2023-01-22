#include "../inc/Fixed.hpp"

void test_subject() {
	Fixed		a;
	Fixed const b(Fixed(5.05f ) * Fixed(2 ));

	std::cout << std::endl << "----Test from the subject----" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
}

void test_comparison_operators(){
	Fixed	a1(4);
	Fixed	a2(2);
	Fixed	a3(4);

	std::cout << std::endl << "----Test comparison operators----" << std::endl;
	std::cout << a1 << " == " << a2 << "\t(false): \t" << (a1 == a2) << std::endl;
	std::cout << a1 << " == " << a3 << "\t(true): \t" << (a1 == a3) << std::endl;
	std::cout << a1 << " != " << a2 << "\t(true): \t" << (a1 != a2) << std::endl;
	std::cout << a1 << " != " << a3 << "\t(false): \t" << (a1 != a3) << std::endl;
	std::cout << a1 << " > " << a2 << "\t(true): \t" << (a1 > a2) << std::endl;
	std::cout << a1 << " >= " << a2 << "\t(true): \t" << (a1 >= a2) << std::endl;
	std::cout << a1 << " < " << a2 << "\t(false): \t" << (a1 < a2) << std::endl;
	std::cout << a1 << " <= " << a2 << "\t(false): \t" << (a1 <= a2) << std::endl;
	std::cout << a1 << " > " << a3 << "\t(false): \t" << (a1 > a3) << std::endl;
	std::cout << a1 << " >= " << a3 << "\t(true): \t" << (a1 >= a3) << std::endl;
	std::cout << a1 << " < " << a3 << "\t(false): \t" << (a1 < a3) << std::endl;
	std::cout << a1 << " <= " << a3 << "\t(true): \t" << (a1 <= a3) << std::endl;
}

void test_arithmetic_operators(){
	Fixed	a1(8);
	Fixed	a2(2);
	Fixed	b1(6.24f);
	Fixed	b2(2.08f);

	std::cout << std::endl << "----Test arithmetic operators----" << std::endl;
	std::cout << a1 << " + " << a2 << " = " << a1 + a2 << std::endl;
	std::cout << a1 << " - " << a2 << " = " << a1 - a2 << std::endl;
	std::cout << a1 << " / " << a2 << " = " << a1 / a2 << std::endl;
	std::cout << a1 << " * " << a2 << " = " << a1 * a2 << std::endl << std::endl;
	std::cout << b1 << " + " << b2 << " = " << b1 + b2 << std::endl;
	std::cout << b1 << " - " << b2 << " = " << b1 - b2 << std::endl;
	std::cout << b1 << " / " << b2 << " = " << b1 / b2 << std::endl;
	std::cout << b1 << " * " << b2 << " = " << b1 * b2 << std::endl << std::endl;
	std::cout << a1 << " + " << b2 << " = " << a1 + b2 << std::endl;
	std::cout << a1 << " - " << b2 << " = " << a1 - b2 << std::endl;
	std::cout << a1 << " / " << b2 << " = " << a1 / b2 << std::endl;
	std::cout << a1 << " * " << b2 << " = " << a1 * b2 << std::endl << std::endl;
}

void test_increment_decrement_operators(){
	Fixed	a1;
	Fixed	b1(2.08f);

	std::cout << std::endl << "----Test increment and decrement operators----" << std::endl;
	std::cout << "a1 = " << a1 << "\t\t\t\ta1++ = " << a1++ << "\t\t\t\ta1 = " << a1 << std::endl;
	std::cout << "a1 = " << a1 << "\t\t++a1 = " << ++a1 << "\t\ta1 = " << a1 << std::endl;
	std::cout << "a1 = " << a1 << "\t\ta1-- = " << a1-- << "\t\ta1 = " << a1 << std::endl;
	std::cout << "a1 = " << a1 << "\t\t--a1 = " << --a1 << "\t\t\t\ta1 = " << a1 << std::endl << std::endl;
	std::cout << "b1 = " << b1 << "\t\tb1++ = " << b1++ << "\t\t\tb1 = " << b1 << std::endl;
	std::cout << "b1 = " << b1 << "\t\t++b1 = " << ++b1 << "\t\t\tb1 = " << b1 << std::endl;
	std::cout << "b1 = " << b1 << "\t\tb1-- = " << b1-- << "\t\t\tb1 = " << b1 << std::endl;
	std::cout << "b1 = " << b1 << "\t\t--b1 = " << --b1 << "\t\t\tb1 = " << b1 << std::endl << std::endl;
}

void test_min_max(){
	Fixed	a(2);
	Fixed	b(6.24f);
	Fixed&	c = a;
	Fixed&	d = b;


	std::cout << std::endl << "----Test min max----" << std::endl;
	std::cout << "a = " << a << "\tb = " << b << "\t\tmax(a,b):\t" << Fixed::max(a, b) << std::endl;
	std::cout << "a = " << a << "\tb = " << b << "\t\tmin(a,b):\t" << Fixed::min(a, b) << std::endl;
	std::cout << "a = " << c << "\tb = " << d << "\t\tmax(&a,&b):\t" << Fixed::max(c, d) << std::endl;
	std::cout << "a = " << c << "\tb = " << d << "\t\tmin(&a,&b):\t" << Fixed::min(c, d) << std::endl;
}

int	main( void )
{
	test_subject();
	test_comparison_operators();
	test_arithmetic_operators();
	test_increment_decrement_operators();
	test_min_max();
	return (0);
}
