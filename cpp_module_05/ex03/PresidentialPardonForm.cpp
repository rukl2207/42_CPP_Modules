#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5),
	_target("PresidentialPardonForm")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):
	Form(target, 25, 5),
	_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
	Form(other.getName(), 25, 5),
	_target(other.getTarget())
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		this->_target = other.getTarget();
		setSign(other.getSign());
	}
	return *this;
}

const std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSign())
	{
		throw NotSignException();
	}
	else if (executor.getGrade() <= this->getGradeExecute())
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" \
		<< std::endl;
	}
	else
	{
//		std::cout << executor.getName() << " cannot execute " << this->getName() \
// 		<< " because ";
		throw Bureaucrat::GradeTooLowException();
	}

}
