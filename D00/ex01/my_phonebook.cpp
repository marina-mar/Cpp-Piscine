/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:34:45 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/13 18:34:46 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstring>
#include <iomanip>
#include "contact_info.class.hpp"

int contact_info::how_many = 0;

contact_info	add(contact_info *all_contacts)
{
	contact_info new_contact;

	std::cout << "\033[0;33m_____________ADD___MODE____________\033[0m" << std::endl;
	std::cout << "First Name: ";
	std::cin >> new_contact.first_name;
	std::cout << "Last Name: ";
	std::cin >> new_contact.last_name;
	std::cout << "Nickname: ";
	std::cin >> new_contact.nickname;
	std::cout << "Login: ";
	std::cin >> new_contact.login;
	std::cout << "Postal Address: ";
	std::cin >> new_contact.postal;
	std::cout << "Email Address: ";
	std::cin >> new_contact.email;
	std::cout << "Phone Number: ";
	std::cin >> new_contact.phone;
	std::cout << "Birthday Date: ";
	std::cin >> new_contact.birthday;
	std::cout << "Favorite Meal: ";
	std::cin >> new_contact.meal;
	std::cout << "Underwear Color: ";
	std::cin >> new_contact.color;
	std::cout << "Secret: ";
	std::cin >> new_contact.secret;
	all_contacts[all_contacts[0].how_many] = new_contact;
	all_contacts[0].how_many++;
	return (new_contact);
}

void	print_contact(contact_info cont)
{
	std::cout << "\033[0;36m___________________________________\033[0m" << std::endl;
	std::cout << "________" << cont.first_name << "___" << cont.last_name << "________" << std::endl;
	std::cout << "Nickname: " << cont.nickname << std::endl;
	std::cout << "Login: " << cont.login << std::endl;
	std::cout << "Postal Address: " << cont.postal << std::endl;
	std::cout << "Email Address: " << cont.email << std::endl;
	std::cout << "Phone Number: " << cont.phone << std::endl;
	std::cout << "Birthday Date: " << cont.birthday << std::endl;
	std::cout << "Favorite Meal: " << cont.meal << std::endl;
	std::cout << "Underwear Color: " << cont.color << std::endl;
	std::cout << "Secret: " << cont.secret << std::endl;
	std::cout << "\033[0;36m___________________________________\033[0m" << std::endl;
}

void	print_nine(char *too_big)
{
	int i = 0;

	while (i < 9)
	{
		std::cout << too_big[i];
		i++;
	}
	std::cout << "." << "\033[0;36m |\033[0m";
}
void	search(contact_info *allcontacts)
{
	int i;
	char index[40];

	i = 0;
	std::cout << "\033[0;33m____________SEARCH_MODE____________\033[0m" << std::endl;
	while (i < allcontacts[0].how_many)
	{
		std::cout << std::setw(10);
		std::cout << i << "\033[0;36m |\033[0m";
		if (strlen(allcontacts[i].first_name) > 10)
			print_nine(allcontacts[i].first_name);
		else
			std::cout << std::setw(10) << allcontacts[i].first_name << "\033[0;36m |\033[0m";
		if (strlen(allcontacts[i].last_name) > 10)
			print_nine(allcontacts[i].last_name);
		else
			std::cout << std::setw(10) << allcontacts[i].last_name << "\033[0;36m |\033[0m";
		if (strlen(allcontacts[i].nickname) > 10)
			print_nine(allcontacts[i].nickname);
		else
			std::cout << std::setfill(' ') << std::setw(10) << allcontacts[i].nickname << std::endl;
		i++;
	}
	std::cout << "Index of the contact you want: ";
	std::cin >> index;
	if (isdigit(index[0]) != 0)
	{
		i = atoi(index);
		if (i < allcontacts[0].how_many)
			print_contact(allcontacts[i]);
		else
			std::cout << "Index not valid!!!!" << std::endl;
	}
	else
		std::cout << "Index not valid!!!!" << std::endl;
}

int		main ( void )
{
	char			buff[7];
	int				i = 0;

	contact_info	all_contacts[9];

	std::cout << "\033[0;36m___________________________________" << std::endl;
	std::cout <<  "________\033[0mringing\033[0;36m____\033[0mphonebook\033[0;36m_______" << std::endl;
	std::cout << "\033[0m Welcome! What do you want to do??\033[0;33m" << std::endl;
	std::cout << "----[\033[0m ADD \033[0;33m]-[\033[0m SEARCH \033[0;33m]-[\033[0m EXIT \033[0;33m]----" << std::endl;
	std::cout << "\033[0mtype here: ";
	std::cin >> buff;
	while (strcmp(buff, "EXIT") != 0)
	{
		if (strcmp(buff, "ADD") == 0 && all_contacts[0].how_many < 8)
			all_contacts[all_contacts[0].how_many] = add(all_contacts);
		else if (strcmp(buff, "ADD") == 0 && all_contacts[0].how_many >= 8)
			std::cout << "Too many contacts!! To add, exit and try again!!" << std::endl;
		else if (strcmp(buff, "SEARCH") == 0 && all_contacts[0].how_many > 0)
			search(all_contacts);
		else if (strcmp(buff, "SEARCH") == 0 && all_contacts[0].how_many == 0)
			std::cout << "You don't have any entrances in your phonebook! Use ADD to create one!" << std::endl;
		while (buff[i] != '\0')
		{
			buff[i] = '\0';
			i++;
		}
		std::cout << "\033[0;33m----[\033[0m ADD \033[0;33m]-[\033[0m SEARCH \033[0;33m]-[\033[0m EXIT \033[0;33m]----\033[0m" << std::endl;
		std::cout << "More? Type here: ";
		std::cin >> buff;
	}
	std::cout << "\033[0;36m___________________________________\033[0m" << std::endl;
}
