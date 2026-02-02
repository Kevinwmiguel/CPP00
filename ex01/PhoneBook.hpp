/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:37:17 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/02 23:46:26 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOO_HPP

#include "ContactClass.hpp"
#include <iostream>
#include <string>
#include <cctype>

class PhoneBook
{
    private:
        ContactClass book[8];
        static int  _i;
    public:
    
    PhoneBook(void);
    ~PhoneBook(void);

    int addcontacts();
    int searchContacts();
    int infoContacts();
    int delContact();
};

PhoneBook::PhoneBook(/* args */)
{
    std::cout << "The PhoneBook constructor has been called " << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "The PhoneBook Destructor has been called " << std::endl;
}



#endif