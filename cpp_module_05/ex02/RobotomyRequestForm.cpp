#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45),
	_target("RobotomyRequestForm")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
	Form( target, 72, 45),
	_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
	Form(other.getName(),72, 45),
	_target(other.getTarget())
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		this->_target = other.getTarget();
		setSign(other.getSign());
	}
	return *this;
}

const std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSign())
	{
		throw NotSignException();
	}
	else if (executor.getGrade() <= this->getGradeExecute())
	{
		std::srand(time(0));
		std::cout << "brrrrrr... brrrrr... brrrrr..." << std::endl;
		if (rand() % 2)
			std::cout << this->_target << " has been robotomized successfully" \
			<< std::endl;
		else
			std::cout << this->_target << " robotomy  failed" << std::endl;
	}
	else
	{
//		std::cout << executor.getName() << " cannot execute " << this->getName() \
// 		<< " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}
