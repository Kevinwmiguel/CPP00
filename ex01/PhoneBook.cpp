/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:37:15 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/14 23:16:41 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
    this->_totalSaved = 0;
    std::cout << "The PhoneBook constructor has been called " << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "The PhoneBook Destructor has been called " << std::endl;
}

int PhoneBook:: addContact()
{
    std::string input;
    
    int i = _index % 8;
    while (true)
    {
        std::cout << "First Name: ";
        if (!(std::getline(std::cin, input)) || input.empty()){
            std::cout << "The list cannot have any empty field, please start again" << std::endl;
            continue;
        }
        book[i].setFirstName(input);
        std::cout << "Last Name ";
        if (!(std::getline(std::cin, input)) || input.empty())
        {
            std::cout << "The list cannot have any empty field, please start again" << std::endl;
            continue;
        }
        book[i].setLastName(input);
        std::cout << "Nick Name ";
        if (!(std::getline(std::cin, input)) || input.empty())
        {
            std::cout << "The list cannot have any empty field, please start again" << std::endl;
            continue;
        }
        book[i].setNickName(input);
        std::cout << "Phone number: ";
        if (!(std::getline(std::cin, input)) || input.empty()){
            std::cout << "The list cannot have any empty field, please start again" << std::endl;
            continue;
        }
        book[i].setPhoneNumber(input);
        std::cout << "Darkest Secret: ";
        if (!(std::getline(std::cin, input)) || input.empty()){
            std::cout << "The list cannot have any empty field, please start again" << std::endl;
            continue;
        }
        book[i].setDarkestSecret(input);
        break;
    }
    std::cout << "The contact has being added" << std::endl;
    _index++;
    if (_totalSaved < 8) _totalSaved++;
    else if (_totalSaved > 8) _totalSaved = 0;
    return 0;
}

std::string formatColumn(std::string str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::searchContacts()
{
    std::string input;
    int i = 0;
    int opt;
    while (i < 8)
    {
        std::cout << i << " ";
        std::cout << "|" << std::setw(10) << formatColumn(book[i].getFirstName());
        std::cout << "|" << std::setw(10) << formatColumn(book[i].getLastName());
        std::cout << "|" << std::setw(10) << formatColumn(book[i].getNickName());
        std::cout << "|" << std::setw(10) << formatColumn(book[i].getPhoneNumber());
        std::cout << "|" << std::setw(10) << formatColumn(book[i].getDarkestSecret()) << "|" << std::endl;
        i++;
    }
    std::cout << "index starts from 0 - 7" << std::endl;
    std::cout << " " << std::ends;
    if (!(std::cin >> opt))
               std::cin.clear();
            std::cin.ignore(10000, '\n');
    if (opt < 0 || opt > 7)
        return ;
    i = -1;
    while (i != opt)
    {
        i++;
    }
    std::cout << "|" << std::setw(10) << formatColumn(book[i].getFirstName());
    std::cout << "|" << std::setw(10) << formatColumn(book[i].getLastName());
    std::cout << "|" << std::setw(10) << formatColumn(book[i].getNickName());
    std::cout << "|" << std::setw(10) << formatColumn(book[i].getPhoneNumber());
    std::cout << "|" << std::setw(10) << formatColumn(book[i].getDarkestSecret()) << "|" << std::endl;
}