#include <iostream>
#include <iomanip>
#include "../inc/Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void ):
				_accountIndex(_nbAccounts),
				_amount(0),
				_nbDeposits(0),
				_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += checkAmount();
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" \
			<< "amount:" << checkAmount() << ";" << "created" << std::endl;
}

Account::Account( int initial_deposit ):
				_accountIndex(_nbAccounts),
				_amount(initial_deposit),
				_nbDeposits(0),
				_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += checkAmount();
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" \
			<< "amount:" << checkAmount() << ";" << "created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" \
			<< "amount:" << checkAmount() << ";" << "closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= checkAmount();
}

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" \
			<< "total:" << getTotalAmount() << ";" \
			<< "deposits:" << getNbDeposits() << ";" \
			<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
			<< "p_amount:" << checkAmount() << ";";
	if (deposit < 0)
		std::cout << "deposit:refused" << std::endl;
	else
	{
		_amount += deposit;
		_totalAmount += deposit;
		_nbDeposits++;
		_totalNbDeposits++;
		std::cout << "deposit:" << deposit << ";" \
				<< "amount:" << checkAmount() << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;
	}
}

bool Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" \
			<< "p_amount:" << checkAmount() << ";";
	if (withdrawal < 0 || checkAmount() - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";" \
				<< "amount:" << checkAmount() << ";" \
				<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

int Account::checkAmount( void ) const
{
	return (_amount);
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" \
			<< "amount:" << checkAmount() << ";" \
			<< "deposits:" << _nbDeposits << ";" \
			<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
	time_t	now = time(NULL);
	tm		*ltm = localtime(&now);

	std::cout << "[" << std::setfill('0') \
			<< std::setw(4) << ltm->tm_year + 1900 \
			<< std::setw(2) << ltm->tm_mon + 1 \
			<< std::setw(2) << ltm->tm_mday \
			<< "_" \
			<< std::setw(2) << ltm->tm_hour \
			<< std::setw(2) << ltm->tm_min \
			<< std::setw(2) << ltm->tm_sec \
			<< "] ";
}
