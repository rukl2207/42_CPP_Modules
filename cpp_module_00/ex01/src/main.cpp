#include "../inc/PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (true)
	{
		std::cout << "Input command: ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.displayPhoneBookList();
		else
			std::cout << "Wrong input. Enter: EXIT / ADD / SEARCH" << std::endl;
	}
	return (0);
}