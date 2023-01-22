#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void tests( void )
{
	Intern intern;
	Form *scf;
	Form *rrf;
	Form *ppf;
	std::cout <<"===========================================" << std::endl;
	try
	{
		scf = intern.makeForm("shrubbery creation", "SCF");
		rrf = intern.makeForm("robotomy request", "RRF");
		ppf = intern.makeForm("some form", "PPF");
	}
	catch (std::exception & exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout <<"===========================================" << std::endl;
	try
	{
		Bureaucrat bur("BILL",1);
		scf = intern.makeForm("shrubbery creation", "SCF");
		rrf = intern.makeForm("robotomy request", "RRF");
		ppf = intern.makeForm("presidential pardon", "PPF");
		std::cout << std::endl;

		std::cout << bur << std::endl;
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		std::cout << std::endl;

		scf->beSigned(bur);
		std::cout << *scf << std::endl;
		scf->execute(bur);
		std::cout << std::endl;

		rrf->beSigned(bur);
		std::cout << *rrf << std::endl;
		rrf->execute(bur);
		std::cout << std::endl;

		ppf->beSigned(bur);
		std::cout << *ppf << std::endl;
		ppf->execute(bur);

		delete scf;
		delete rrf;
		delete ppf;

		std::cout <<"===========================================" << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cout << exc.what() << std::endl;
	}
}

int main ()
{
	tests();
	return 0;
}
