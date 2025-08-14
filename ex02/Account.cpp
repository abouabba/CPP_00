# include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
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

	std::cout   << "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" <<  _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// void Account::displayStatus() const {
// 	for(int i = 0; )
// 	std::cout	<< "index:" << _nbAccounts
// 				<< ""
// }

Account::~Account()
{
	std::cout << "index:"<< _accountIndex<< ";amount:"<< _amount <<";closed" << std::endl;
}
