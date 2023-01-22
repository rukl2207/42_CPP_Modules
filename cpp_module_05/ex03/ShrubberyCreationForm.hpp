#pragma once

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
 public:
	ShrubberyCreationForm( const std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm& other );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm& operator= (const ShrubberyCreationForm& other );

	const std::string	getTarget( void ) const;
	void				execute( Bureaucrat const & executor ) const;

 private:
	ShrubberyCreationForm( void );
	std::string	_target;
};

#endif
