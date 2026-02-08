/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:37:17 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/08 15:33:01 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOO_HPP

#include "ContactClass.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class PhoneBook
{
    private:
        Contact book[8];
        int     _index;
        int     _totalSaved;
    public:
    
    PhoneBook(void);
    ~PhoneBook(void);

    int addContact();
    int searchContacts(int i);
    // int infoContacts();
    // int delContact();
};


#endif