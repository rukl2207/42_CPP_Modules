#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test_SFC( void )
{
	std::cout << std::endl;
	std::cout << "==== Test ShrubberyCreationForm sign ====" << std::endl;
	try
	{
		ShrubberyCreationForm scf("Shrubbery");
		Bureaucrat b("BILL",150);
		scf.beSigned(b);
		b.executeForm(scf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;

	std::cout << "==== Test ShrubberyCreationForm execute ====" << std::endl;
	try
	{
		ShrubberyCreationForm scf("Shrubbery");
		Bureaucrat b("BILL",140);
		scf.beSigned(b);
		b.executeForm(scf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;

	std::cout << "==== Test ShrubberyCreationForm correct ====" << std::endl;
	try
	{
		ShrubberyCreationForm scf("Shrubbery");
		Bureaucrat b("BILL",10);
		scf.beSigned(b);
		b.executeForm(scf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;
}

void test_RRF( void )
{
	std::cout << std::endl;
	std::cout << "==== Test RobotomyRequestForm sign ====" << std::endl;
	try
	{
		RobotomyRequestForm rrf("Robotomy");
		Bureaucrat b("BILL",150);
		rrf.beSigned(b);
		b.executeForm(rrf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;

	std::cout << "==== Test RobotomyRequestForm execute ====" << std::endl;
	try
	{
		RobotomyRequestForm rrf("Robotomy");
		Bureaucrat b("BILL",70);
		rrf.beSigned(b);
		b.executeForm(rrf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;

	std::cout << "==== Test RobotomyRequestForm correct ====" << std::endl;
	try
	{
		RobotomyRequestForm rrf("Robotomy");
		Bureaucrat b("BILL",10);
		rrf.beSigned(b);
		b.executeForm(rrf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;
}

void test_PPF( void )
{
	std::cout << std::endl;
	std::cout << "==== Test PresidentialPardonForm sign ====" << std::endl;
	try
	{
		PresidentialPardonForm ppf("Presidential");
		Bureaucrat b("BILL",150);
		ppf.beSigned(b);
		b.executeForm(ppf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;

	std::cout << "==== Test PresidentialPardonForm execute ====" << std::endl;
	try
	{
		PresidentialPardonForm ppf("Presidential");
		Bureaucrat b("BILL",20);
		ppf.beSigned(b);
		b.executeForm(ppf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;

	std::cout << "==== Test PresidentialPardonForm correct ====" << std::endl;
	try
	{
		PresidentialPardonForm ppf("Presidential");
		Bureaucrat b("BILL",5);
		ppf.beSigned(b);
		b.executeForm(ppf);
	}
	catch(const std::exception& exc)
	{
		std::cerr << exc.what() << std::endl;
	}
	std::cout << "=========================================" << std::endl << std::endl;
}

void test_copy( void )
{
	std::cout << std::endl << "==== Test copy ====" << std::endl;
	{
		Bureaucrat b("BILL",138);
		ShrubberyCreationForm scf1("Shrubbery_1");
		std::cout << scf1 << std::endl;
		ShrubberyCreationForm scf2("Shrubbery_2");
		scf2.beSigned(b);
		std::cout << scf2 << std::endl;
		scf1 = scf2;
		std::cout << scf1 << std::endl;
	}
}

int main(void)
{
	test_SFC();
	test_RRF();
	test_PPF();
//	test_copy();
	return (0);
}
