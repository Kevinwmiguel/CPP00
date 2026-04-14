/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:37:17 by kwillian          #+#    #+#             */
/*   Updated: 2026/04/14 23:09:10 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

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

    int     addContact();
    void    searchContacts();
};


#endif