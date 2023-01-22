#pragma once

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
 public:
	Intern( void );
	Intern( const Intern& other);
	~Intern( void );
	Intern& operator= ( const Intern& other );

	Form* makeForm( const std::string form_name, const std:: string form_target);

	class InternException: public std::exception
	{
	 public:
		virtual const char* what() const throw();
	};

 private:
	Form* makeShrubberyCreationForm( const std::string& target ) const;
	Form* makeRobotomyRequestForm( const std::string& target ) const;
	Form* makePresidentialPardonForm( const std::string& target ) const;
};

#endif
