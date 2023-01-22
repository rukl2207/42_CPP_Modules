#include "Form.hpp"

Form::Form():
	_name("DefaultForm"),
	_is_signed(false),
	_grade_sign(150),
	_grade_execute(150)
{
}

Form::Form(std::string name, int grade_sign, int grade_execute):
	_name(name),
	_is_signed(false),
	_grade_sign(grade_sign),
	_grade_execute(grade_execute)
{
	if (this->_grade_sign < 1 || this->_grade_execute < 1)
		throw Form::GradeTooHighException();
	if (this->_grade_sign > 150 || this->_grade_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other):
	_name(other.getName()),
	_is_signed(other.getSign()),
	_grade_sign(other.getGradeSign()),
	_grade_execute(other.getGradeExecute())
{
}

Form::~Form()
{
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		this->_is_signed = other.getSign();
	return (*this);
}

const std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSign() const
{
	return (this->_is_signed);
}

int Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int Form::getGradeExecute() const
{
	return (this->_grade_execute);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (this->_grade_sign < bureaucrat.getGrade())
		throw GradeTooLowException();
	else if (this->getSign())
		std::cout << this->getName() << " form is already signed." << std::endl;
	else
	{
		this->_is_signed = true;
		std::cout << this->getName() << " form was signed by " \
		<< bureaucrat.getName() << std::endl;
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

std::ostream& operator<< (std::ostream& out, const Form& form)
{
	out << "Form: " << form.getName() << " sign: " << form.getSign() \
	<< " grade to sign: " << form.getGradeSign() << " grade to execute: " \
	<< form.getGradeExecute();
	return out;
}
