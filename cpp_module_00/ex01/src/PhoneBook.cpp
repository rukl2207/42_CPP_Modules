#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_indexContact = 0;
}

PhoneBook::~PhoneBook( void )
{
}

void	PhoneBook::addContact( void )
{
	_contact[_indexContact].createContact();
	_indexContact++;
	if (_indexContact == MAX_CONTACTS)
		_indexContact = 0;
	std::cout << std::endl;
}

void	PhoneBook::displayPhoneBookList( void )
{
	int	i;
	int	width;

	width = 10;
	for (i = 0; i < MAX_CONTACTS; i++)
	{
		if (!this->_contact[i].isCreatedContact())
			break ;
		if (i == 0)
		{
			std::cout << "|" << std::setw(width) << "index" << "|" \
				<< std::setw(width) << "first name" << "|" \
				<< std::setw(width) << "last name" << "|" \
				<< std::setw(width) << "nickname" << "|" << std::endl;
			std::cout << std::setw(4 * width + 5) << std::setfill('-') \
				<< "" << std::endl;
		}
		this->_contact[i].printContactRow(i);
	}
	if (i == 0)
	{
		std::cout << "The phonebook is empty (no saved contacts)." << std::endl;
		return ;
	}
	else
		std::cout << std::setw(4 * width + 5) << std::setfill('-') \
				  << "" << std::endl;
	this->displayContactCard( i );
}

void	PhoneBook::displayContactCard(const int max_index)
{
	int	input;

	while (true)
	{
		std::cout << "Enter the index ( 0 to return to command selection ): ";
		std::cin >> input;
		if (std::cin.fail())
		{
			std::cout << "Wrong input: not an integer" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (input == 0)
		{
			std::cout << std::endl;
			break ;
		}
		else if (input > 0 && input <= max_index)
		{
			this->_contact[input - 1].printContactCard();
			std::cout << std::endl;
			break ;
		}
		else
			std::cout << "Wrong index." << std::endl;
	}
}