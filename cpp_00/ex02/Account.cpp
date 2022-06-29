/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:57:19 by zihirri           #+#    #+#             */
/*   Updated: 2022/06/28 17:23:30 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	
	tm *ltm = localtime(&now);
	std::cout << "["<< 1900+ ltm->tm_year <<1+ltm->tm_mon<< ltm->tm_mday
		<< "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "]";
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";created" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts; 
}
int	Account::getTotalAmount( void )
{
	return Account::_totalAmount; 
}
int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits; 
}
int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals; 
}

void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	std::cout << ";deposit:"  << deposit << ";amount"
		<< this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();	
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount()
		<< ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();	
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposit:"
		<< this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;   
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return 0;
	}
	this->_amount -= withdrawal;
	this->_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return 1;
}
