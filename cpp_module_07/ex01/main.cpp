#include "iter.hpp"

//class Awesome
//{
// public:
//	Awesome( void ) : _n( 42 ) { return; }
//	int get( void ) const { return this->_n; }
// private:
//	int _n;
//};
//
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
//
//template< typename T >
//void print( T const & x ) { std::cout << x << std::endl; return; }


int main( void )
{
	std::cout << "==========================================="<< std::endl;
	std::cout << "Test int:" << std::endl;
	int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7};
	iter(arr1, sizeof(arr1)/sizeof(arr1[0]), print_value);
	std::cout << std::endl;
	iter(arr1, sizeof(arr1)/sizeof(arr1[0]), print_value_multiply_2);
	std::cout << std::endl;

	std::cout << "==========================================="<< std::endl;
	std::cout << "Test double:" << std::endl;
	double arr2[] = {-0.1, 1.5, 2.1, 4.2, -10.7};
	iter(arr2, sizeof(arr2)/sizeof(arr2[0]), print_value);
	std::cout << std::endl;
	iter(arr2, sizeof(arr2)/sizeof(arr2[0]), print_value_multiply_2);
	std::cout << std::endl;

	std::cout << "==========================================="<< std::endl;
	std::cout << "Test bool:" << std::endl;
	bool arr3[] = { true, false, true, false};
	iter(arr3, sizeof(arr3)/sizeof(arr3[0]), print_value);
	std::cout << std::endl;
	iter(arr3, sizeof(arr3)/sizeof(arr3[0]), print_value_multiply_2);
	std::cout << std::endl;

	std::cout << "==========================================="<< std::endl;
	std::cout << "Test string:" << std::endl;
	std::string s = "Hello!";
	iter(s.c_str(), s.length(), print_value);
	std::cout << std::endl;
	iter(s.c_str(), s.length(), print_value_multiply_2);
	std::cout << std::endl;

	std::cout << "==========================================="<< std::endl;
//	int tab[] = { 0, 1, 2, 3, 4 };
//	Awesome tab2[5];
//	iter( tab, 5, print );
//	iter( tab2, 5, print );
//	std::cout << "==========================================="<< std::endl;

	return (0);
}
