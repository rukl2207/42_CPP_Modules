#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <fstream>
#include <stdlib.h>
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
 public:
	RobotomyRequestForm( const std::string target );
	RobotomyRequestForm( const RobotomyRequestForm& other );
	~RobotomyRequestForm( void );

	RobotomyRequestForm& operator= (const RobotomyRequestForm& other );

	const std::string	getTarget( void ) const;
	void				execute( Bureaucrat const & executor ) const;

 private:
	std::string	_target;
	RobotomyRequestForm( void );
};

#endif
