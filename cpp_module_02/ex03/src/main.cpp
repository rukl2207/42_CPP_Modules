#include "../inc/Point.hpp"

int	main( void )
{
	Point	a;
	Point	b(0, 10);
	Point	c(10, 0);

	std::cout << "----Test 1. Inside---" << std::endl;
	if (bsp(a, b, c, Point(1, 1)))
		std::cout << "Point is inside the triangle." << std::endl << std::endl;
	else
		std::cout << "Point is outside the triangle." << std::endl << std::endl;

	std::cout << "----Test 2. Outside---" << std::endl;
	if (bsp(a, b, c, Point(-1, -1)))
		std::cout << "Point is inside the triangle." << std::endl << std::endl;
	else
		std::cout << "Point is outside the triangle." << std::endl << std::endl;

	std::cout << "----Test 3. Edge ---" << std::endl;
	if (bsp(a, b, c, Point(1, 0)))
		std::cout << "Point is inside the triangle." << std::endl << std::endl;
	else
		std::cout << "Point is outside the triangle." << std::endl << std::endl;

	std::cout << "----Test 4. Vertex ---" << std::endl;
	if (bsp(a, b, c, Point(0, 0)))
		std::cout << "Point is inside the triangle." << std::endl << std::endl;
	else
		std::cout << "Point is outside the triangle." << std::endl << std::endl;


	return (0);
}
