#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments!" << std::endl;
		return (1);
	}
	try
	{
		Convert convert(argv[1]);
		convert.printAll();
	}
	catch (const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	return (0);
}
