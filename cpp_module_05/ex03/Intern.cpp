#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern::~Intern()
{}

Intern& Intern::operator=(const Intern& other)
{
	if (this == &other)
		return *this;
	return *this;
}

const char* Intern::InternException::what() const throw()
{
	return  ("Unknown form");
}

Form* Intern::makeForm(const std::string form_name, const std::string target)
{
	std::string form_names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
	};
	Form *(Intern::*forms[])( const std::string& ) const = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm
	};
	int i;
	for (i = 0; form_name != form_names[i] && i < 3; ++i)
	{};
	if (i < 3)
	{
		std::cout << "Intern creates " << target << std::endl;
		return (this->*forms[i])(target);
	}
	throw Intern::InternException();
}

Form* Intern::makeShrubberyCreationForm(const std::string& target) const
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeRobotomyRequestForm(const std::string& target) const
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::makePresidentialPardonForm(const std::string& target) const
{
	return (new PresidentialPardonForm(target));
}
