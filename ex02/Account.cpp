/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:18:34 by kwillian          #+#    #+#             */
/*   Updated: 2026/03/15 21:33:24 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:

//[19920104_091532] index:1;amount:785;closed

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);
    std::tm* local = std::localtime(&now);

    std::cout << "[";
    std::cout << (local->tm_year + 1900);
    std::cout << std::setw(2) << std::setfill('0') << (local->tm_mon + 1);
    std::cout << std::setw(2) << std::setfill('0') << local->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::setfill('0') << local->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << local->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << local->tm_sec;
    std::cout << "] ";
}

std::string getTimeStamp(){
    std::time_t now = std::time(NULL);
    std::tm* local = std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local);
    return std::string(buffer);
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << _amount;
    if (withdrawal > _amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;

    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;

    return true;
}

int	Account::getNbAccounts( void ){
    return (_nbAccounts);
}

int	Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
}

int	Account::getNbDeposits( void ){
    return (_totalNbDeposits);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";deposits:" << this->_nbDeposits
              << ";withdrawals:" << this->_nbWithdrawals
              << std::endl;
}

void Account::makeDeposit(int deposit)
{
    int previous = _amount;

    _amount += deposit;
    _totalAmount += deposit;

    _nbDeposits++;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << previous
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";created"
              << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed"
              << std::endl;
}