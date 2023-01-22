# include "../inc/Harl.hpp"

Harl::Harl( void )
{}

Harl::~Harl( void )
{}

void Harl::complainFilter(std::string level)
{
	void	(Harl::*complaintPtr[])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string complaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	unsigned long i;
	for (i = 0; i < sizeof(complaintLevels) / sizeof(complaintLevels[0]); i++)
		if (level == complaintLevels[i])
			break;
	switch (i)
	{
	case (0):
		(this->*complaintPtr[0])();
		std::cout << std::endl;
	case (1):
		(this->*complaintPtr[1])();
		std::cout << std::endl;
	case (2):
		(this->*complaintPtr[2])();
		std::cout << std::endl;
	case (3):
		(this->*complaintPtr[3])();
		std::cout << std::endl;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" \
				<< std::endl << std::endl;
	}
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n"
				 "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				 "I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]\n"
				 "I cannot believe adding extra bacon costs more money. "
				 "You didn't put enough bacon in my burger! If you did, "
				 "I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]\n"
				 "I think I deserve to have some extra bacon for free. "
				 "I've been coming for years whereas you started working here "
				 "since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]\n"
				 "This is unacceptable! "
				 "I want to speak to the manager now." << std::endl;
}



