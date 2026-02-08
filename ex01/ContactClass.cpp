/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:50:49 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/08 15:14:55 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

Contact::Contact(void)
{
    std::cout << "The ContactClass Constructor has been called" << std::endl;
}

Contact::~Contact(void)
{
    std::cout << "The ContactClass Destructor has been called" << std::endl;
}

void Contact::setFirstName(std::string str) {
    this->FirstName = str;
}

std::string Contact::getFirstName() {
    return (this->FirstName);
}

void Contact::setLastName(std::string str)
{
    this->LastName = str;
}

std::string Contact::getLastName()
{
    return (this->LastName);
}

void Contact::setNickName(std::string str)
{
    this->NickName = str;
}

std::string Contact::getNickName()
{
    return (this->NickName);
}

void Contact::setPhoneNumber(std::string str)
{
    this->PhoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
    this->DarkestSecret = str;
}