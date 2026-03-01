/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 19:18:34 by kwillian          #+#    #+#             */
/*   Updated: 2026/03/01 21:53:50 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

//[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:

//[19920104_091532] index:1;amount:785;closed

bool	Account::makeWithdrawal( int withdrawal ){
    bool    status = false;

    this->_totalAmount = this->_totalAmount - withdrawal;
    this->_nbWithdrawals++;
    return (status);
}

int	Account::getNbAccounts( void ){
    return (_totalNbDeposits);
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

std::string getTimeStamp(){
    std::time_t now = std::time(NULL);
    std::tm* local = std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local);
    return std::string(buffer);
}

void	Account::displayStatus( void ) const
{
    std::cout << getTimeStamp() << this->_accountIndex << this->_totalAmount << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_totalAmount = this->_totalAmount + deposit;
    std::cout << "The deposit has been done" << std::endl;
}

Account::Account( int initial_deposit ){
    makeDeposit(initial_deposit);
    std::cout << "The Account constructor has been called" << std::endl;
}

Account::~Account(){
    std::cout << "The Account destructor has been called" << std::endl;
}