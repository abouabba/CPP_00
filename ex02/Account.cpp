# include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp() {
	std::time_t t = std::time(NULL);
	std::tm* now = std::localtime(&t);

	std::cout	<< "["
				<< (now->tm_year + 1900)
				<< std::setw(2) << std::setfill('0') << now->tm_mon + 1
				<< std::setw(2) << std::setfill('0') << now->tm_mday << "_"
				<< std::setw(2) << std::setfill('0') << now->tm_hour
				<< std::setw(2) << std::setfill('0') << now->tm_min
				<< std::setw(2) << std::setfill('0') << now->tm_sec
				<< "] ";
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex<< ";amount:"<< _amount <<";created" << std::endl;
}

int	Account::getNbAccounts( void ) {return _nbAccounts;}
int	Account::getTotalAmount( void ) {return _totalAmount;}
int	Account::getNbDeposits( void ) {return _totalNbDeposits;}
int	Account::getNbWithdrawals( void ) {return _totalNbWithdrawals;}

void Account::displayAccountsInfos() {

	Account::getNbAccounts();
	Account::getTotalAmount();
	Account::getNbDeposits();
	Account::getNbWithdrawals();
	_displayTimestamp();

	std::cout   << "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" <<  _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const {

	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl; 
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit;

	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout	<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits	 << std::endl;
}

int Account::checkAmount() const {
	return _amount;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount;
	if (checkAmount() < withdrawal) {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout	<< ";withdrawal:" << withdrawal
				<< ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex<< ";amount:"<< _amount <<";closed" << std::endl;
}
