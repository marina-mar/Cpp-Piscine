/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 00:56:04 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/14 00:56:05 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_nbAccounts++;
	this->_accountIndex = this->_nbAccounts;
	std::cout << "index:" << (this->_accountIndex - 1)<< ";";
	std::cout << "amount:" << initial_deposit << ";created" << std::endl;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount = this->_totalAmount + initial_deposit;
}

void Account::displayAccountsInfos() {
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const {
	std::cout << "index:" << (this->_accountIndex - 1)<< ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ){
	std::cout << "index:" << (this->_accountIndex - 1) << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount = this->_amount + deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_totalAmount = this->_totalAmount + deposit;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ){
	std::cout << "index:" << (this->_accountIndex - 1) << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal <= this->_amount){
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return 1;
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return 0;
	}
}
Account::~Account( void ){
	std::cout << "index:" << (this->_accountIndex) << ";";
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
}