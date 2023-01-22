#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", 145, 137),
	_target("ShrubberyCreationForm")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
	Form(target, 145, 137),
	_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
	Form(other.getName(), 145, 137),
	_target(other.getTarget())
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		this->_target = other.getTarget();
		setSign(other.getSign());
	}
	return *this;
}

const std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!this->getSign())
	{
		throw NotSignException();
	}
	else if (executor.getGrade() <= this->getGradeExecute())
	{
		std::string tree = "                               \n"
						   "          &&& &&  & &&         \n"
						   "      && &\\/&\\|& ()|/ @, &&  \n"
						   "      &\\/(/&/&||/& /_/)_&/_&  \n"
						   "   &() &\\/&|()|/&\\/ '%\" & ()\n"
						   "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
						   "&&   && & &| &| /& & % ()& /&& \n"
						   " ()&_---()&\\&\\|&&-&&--%---()~\n"
						   "     &&     \\|||              \n"
						   "             |||               \n"
						   "             |||               \n"
						   "             |||               \n"
						   "       , -=-~  .-^- _          \n"
						   "              `                \n";
		try
		{
			std::ofstream out_file(this->_target + "_shrubbery");
			if (out_file.is_open())
			{
				out_file << tree;
				std::cout << "The form is completed" << std::endl;
			}
			else
				std::cout << "The file did not open" << std::endl;
			out_file.close();
		}
		catch (std::exception &exc)
		{
			std::cout << "The file did not open" << std::endl;
		}
	}
	else
	{
//		std::cout << executor.getName() << " cannot execute " << this->getName() \
//		<< " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}
