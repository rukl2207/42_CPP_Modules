#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
//	std::cout << "Bureaucrat default constructor called for " \
//	<< this->getName() << " with grade of " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name): _name(name), _grade(150)
{
//	std::cout << "Bureaucrat name constructor called for " \
//	<< this->getName() << " with grade of " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
//	std::cout << "Bureaucrat name and grade constructor called for " \
//	<< this->getName() << " with grade of " << this->getGrade() << std::endl;
}

Bureaucrat::~Bureaucrat()
{
//	std::cout << "Bureaucrat destructor called for " \
//	<< this->getName() << " with grade of " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):
	_name(other.getName()),
	_grade(other.getGrade())
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->_grade = other.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	--this->_grade;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	++this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}
