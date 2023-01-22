#include "whatever.hpp"

//class Awesome
//{
// public:
//	Awesome(void) : _n(0) {}
//	Awesome( int n ) : _n( n ) {}
//	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
//	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
//	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
//	int get_n() const { return _n; }
// private:
//	int _n;
//};
//std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }


int main( void ) {

	{
		std::cout << "==========================================="<< std::endl;
		int a = 2;
		int b = 3;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "==========================================="<< std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	{
		std::cout << "==========================================="<< std::endl;
		float a = 2.5;
		float b = 3.4;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "==========================================="<< std::endl;
		double a = 4.5;
		double b = 3.1;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	}
	{
		std::cout << "==========================================="<< std::endl;
		char a = 'A';
		char b = 'B';

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	}
//	{
//		std::cout << "==========================================="<< std::endl;
//		Awesome a(2), b(4);
//		std::cout << "a = " << a << ", b = " << b << std::endl;
//		swap(a, b);
//		std::cout << "a = " << a << ", b = " << b << std::endl;
//		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
//		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
//	}
	return 0;
}
