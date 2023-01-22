#include "../inc/Contact.hpp"

Contact::Contact()
{
	_created = false;
}

Contact::~Contact()
{}

void	Contact::createContact()
{
	std::cout << "Create new contact." << std::endl;
	std::cout << "Input first name     : ";
	std::cin >> _firstName;
	std::cout << "Input last name      : ";
	std::cin >> _lastName;
	std::cout << "Input nickname       : ";
	std::cin >> _nickName;
	std::cout << "Input phone number   : ";
	std::cin >> _phoneNumber;
	std::cout << "Input darkest secret : ";
	std::cin >> _darkestSecret;
	_created = true;
}

void	Contact::printContactCard( void )
{
	std::cout << "The contact card." << std::endl \
			  << "First name     : " << this->_firstName << std::endl \
			  << "Last name      : " << this->_lastName << std::endl \
			  << "Nickname       : " << this->_nickName << std::endl \
			  << "Phone number   : " << this->_phoneNumber << std::endl \
			  << "Darkest secret : " << this->_darkestSecret << std::endl;
}

bool	Contact::isCreatedContact()
{
	return (this->_created);
}

void	Contact::printCell(std::string cell)
{
	if (cell.length() > 10)
		std::cout << std::setw(10) << cell.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setw(10) << cell << "|";
	return ;
}

void	Contact::printContactRow(int i)
{
	std::cout << "|" << std::setw(10) << std::setfill(' ') << i + 1 << "|";
	printCell(_firstName);
	printCell(_lastName);
	printCell(_nickName);
	std::cout << std::endl;
}
