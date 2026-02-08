/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:01:33 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/08 16:11:30 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook   reprograph;
        std::string command;

    while (true) {
        std::cout << "[1] (ADD)" << std::endl;
        std::cout << "[2] (SEARCH)" << std::endl;
        std::cout << "[3] (EXIT)" << std::endl;
        if (!std::getline(std::cin, command))
            break;
        if (command == "ADD")
            reprograph.addContact();
        else if (command == "SEARCH")
        {
            int opt;
            if (!(std::cin >> opt))
                std::cin.clear();
            std::cin.ignore(10000, '\n'); 
            reprograph.searchContacts(opt);
        }
        else if (command == "INFO")
            break;
        else if (command == "EXIT")
            break;
    }
}