#include "../inc/Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
		harl.complainFilter(argv[1]);
	else
		std::cout << "Error: Wrong number of arguments." << std::endl;
	return (EXIT_SUCCESS);
}
