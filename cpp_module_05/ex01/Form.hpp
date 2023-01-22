#pragma once

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
 public:
	Form( void );
	Form (std::string name, int grade_sign, int grade_execute);
	Form( const Form& other );

	~Form( void );

	Form& operator= ( const Form& other );

	const std::string	getName( void ) const;
	bool				getSign( void ) const;
	int 				getGradeSign( void ) const;
	int 				getGradeExecute( void ) const;
	void				beSigned( Bureaucrat& bureaucrat );

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
	bool				_is_signed;
	const int			_grade_sign;
	const int			_grade_execute;
};

std::ostream& operator<< (std::ostream& out, const Form& form);

#endif
