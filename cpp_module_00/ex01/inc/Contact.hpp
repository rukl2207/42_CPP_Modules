#pragma once

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
 private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	bool		_created;

 public:
	Contact( void );
	~Contact( void );
	void	createContact( void );
	void	printContactCard( void );
	bool	isCreatedContact( void );
	void	printCell(std::string cell);
	void	printContactRow(int i);
};
