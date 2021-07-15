/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 19:58:30 by spark             #+#    #+#             */
/*   Updated: 2021/07/15 22:24:54 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " account:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}	


Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

void Account::makeDeposit( int deposit )
{
	int p_amount = 0;

	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "p_amount:" << p_amount << ";" << "deposits:" << deposit << ";" << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	int p_amount = 0;

	p_amount = _amount;
	_displayTimestamp();

	if (withdrawal > _amount)
	{
		std::cout << " index:" << _accountIndex << ";" << "p_amount:" << p_amount << ";" << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << " index:" << _accountIndex << ";" << "p_amount:" << p_amount << ";" << "withdrawal:" << withdrawal << ";" << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	
}

int Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t now = time(nullptr);
	tm *now_tm = gmtime(&now);
	std::cout << std::setfill('0')
			  << "[" << now_tm->tm_year
			  << std::setw(2) << now_tm->tm_mon + 1
			  << std::setw(2) << now_tm->tm_mday << "_"
			  << std::setw(2) << now_tm->tm_hour
			  << std::setw(2) << now_tm->tm_min
			  << std::setw(2) << now_tm->tm_sec
			  << "]";
}
