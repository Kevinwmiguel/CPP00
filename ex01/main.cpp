/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:01:33 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/09 10:42:10 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook   reprograph;
        std::string command;
    int opts;

    while (true) {
        std::cout << "[1] (ADD)" << std::endl;
        std::cout << "[2] (SEARCH)" << std::endl;
        std::cout << "[3] (INFO)" << std::endl;
        std::cout << "[4] (EXIT)" << std::endl;
        if (!(std::cin >> opts))
                    std::cin.clear();
                std::cin.ignore(10000, '\n'); 
        switch (opts)
        {
            case 1:
                reprograph.addContact();
                break;
            case 2:
                int opt;
                if (!(std::cin >> opt))
                    std::cin.clear();
                std::cin.ignore(10000, '\n'); 
                reprograph.searchContacts(opt);
                break;
            case 3:
                reprograph.infoContacts();
                break;
            case 4:
                break;
        }
        if (opts == 4)
            break;
        return 0;
    }
}