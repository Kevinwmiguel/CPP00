/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:01:33 by kwillian          #+#    #+#             */
/*   Updated: 2026/02/09 17:53:52 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string toupper2(std::string command)
{
    int x = command.length();
    for (int i = 0; i < x; i++)
    {
        command[i] = toupper(command[i]);
    }
    return (command);
}

int main(void)
{
    PhoneBook   reprograph;
    std::string command;
    while (true) {
        std::cout << "[1] (ADD)" << std::endl;
        std::cout << "[2] (SEARCH)" << std::endl;
        std::cout << "[3] (EXIT)" << std::endl;
        std::cout << "==========" << std::endl;
        if (!(std::getline(std::cin , command)))
            break;
        command = toupper2(command);
        std::cout << "conteudo de command " << command << std::endl;
        if (command == "ADD")
            reprograph.addContact();
        if (command == "SEARCH")
        {
            std::cout << "index starts from 0 - 7" << std::endl;
            int opt;
            std::cout << " " << std::ends;
            if (!(std::cin >> opt))
               std::cin.clear();
            std::cin.ignore(10000, '\n'); 
            reprograph.searchContacts(opt);
        }
        if (command == "EXIT")
            return (0);
    }
}
