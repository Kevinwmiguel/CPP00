/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:51:04 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/02 23:46:23 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class ContactClass
{
    private:
    
    public:
    ContactClass(void);
    ~ContactClass(void);
};

ContactClass::ContactClass(void)
{
    std::cout << "The ContactClass Constructor has been called" << std::endl;
}

ContactClass::~ContactClass(void)
{
    std::cout << "The ContactClass Destructor has been called" << std::endl;
}


#endif