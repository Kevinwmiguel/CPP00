/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:37:15 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/08 16:10:59 by kwillian         ###   ########.fr       */
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

int PhoneBook::addContact()
{
    std::string input;
    
    int i = _index % 8;
    std::cout << "First Name: ";
    if (!(std::getline(std::cin, input)) || input.empty()) return 1;
    book[i].setFirstName(input);
    std::cout << "Last Name ";
    if (!(std::getline(std::cin, input)) || input.empty()) return 1;
    book[i].setLastName(input);
    std::cout << "Nick Name ";
    if (!(std::getline(std::cin, input)) || input.empty()) return 1;
    book[i].setNickName(input);
    std::cout << "Contacto adicionado com Sucesso" << std::endl;
    _index++;
    if (_totalSaved < 8) _totalSaved++;
    else if (_totalSaved > 8) _totalSaved = 0;
    return 0;
}

int PhoneBook::searchContacts(int look)
{
    std::string input;
    int i = 0;

    while (i != look)
    {
        i++;    
    }
    std::cout << "First Name " << book[i].getFirstName().substr(0, 9) + "." << std::endl;
    std::cout << "Last name " << book[i].getLastName() << std::endl;
    std::cout << "Last name " << book[i].getNickName() << std::endl;
    return (0);
}

// void    
//     int infoContacts();
//     int delContact();