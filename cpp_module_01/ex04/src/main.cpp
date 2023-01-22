#include "../inc/Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong number of arguments.\n"
					 "Launch rules:\t./replace <filename> <search string> <replace string>\n"
					 "Sample usage:\t./replace text.txt hello hi" << std::endl;
		return (EXIT_FAILURE);
	}

	Replace repl;
	if (repl.replace(argv[1], argv[2], argv[3]) == EXIT_SUCCESS)
		std::cout << "The replacement was successful." << std::endl;
	else
	{
		std::cout << "The replacement failed" << std::endl;
		return (EXIT_FAILURE);
	}

//	std::cout << std::endl << "----------------------------------" << std::endl;
//	system("leaks replace");
//	std::cout << std::endl << "----------------------------------" << std::endl;

	return (EXIT_SUCCESS);
}
