#pragma once

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include <stdexcept>

#include "Form.hpp"

class Form;

class Bureaucrat
{
 public:
	Bureaucrat( void );
	Bureaucrat( const std::string name );
	Bureaucrat( const std::string name, int grade );
	Bureaucrat( const Bureaucrat& other );

	~Bureaucrat( void );

	Bureaucrat& operator= ( const Bureaucrat& other );

	std::string	getName( void ) const;
	int 		getGrade( void ) const;
	void		incrementGrade( void );
	void		decrementGrade( void );

	void		signForm( Form& form );

	void		executeForm( Form const & form );

	class GradeTooHighException: public std::exception
	{
	 public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	 public:
		virtual const char* what() const throw();
	};

 private:
	const std::string	_name;
	int 				_grade;
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat);

#endif
