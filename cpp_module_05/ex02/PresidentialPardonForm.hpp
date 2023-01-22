#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
 public:
	PresidentialPardonForm( const std::string target );
	PresidentialPardonForm( const PresidentialPardonForm& other );
	~PresidentialPardonForm( void );

	PresidentialPardonForm& operator= (const PresidentialPardonForm& other );

	const std::string	getTarget( void ) const;
	void				execute( Bureaucrat const & executor ) const;

 private:
	std::string	_target;
	PresidentialPardonForm( void );
};

#endif
