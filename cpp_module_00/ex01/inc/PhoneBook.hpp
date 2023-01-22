#pragma once

# include <iostream>
# include <string>
# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
 private:
	Contact	_contact[MAX_CONTACTS];
	int		_indexContact;

 public:
	PhoneBook( void );
	~PhoneBook( void );
	void	addContact( void );
	void	displayPhoneBookList( void );
	void	displayContactCard(const int max_index);
};
