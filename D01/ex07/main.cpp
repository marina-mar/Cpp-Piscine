/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:04:53 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/15 19:04:54 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

void read_and_replace(std::string file_name, std::string str1, std::string str2)
{
	size_t index;
	size_t i = 0;
	std::string complement = ".replace";
	std::ifstream ifs(file_name, std::ifstream::in);
	std::ofstream ofs(file_name + complement);
	std::string keep_str;

	if (!ifs.is_open()) {
		std::cout << "Error reading from this file! Sure It exists???" << std::endl;
		return;
	}
	while (!ifs.eof())
	{
		getline(ifs, keep_str, ' ');
		index = keep_str.find(str1, 0);
		if (index > 0 && keep_str[index - 1] == '\n')
		{
			while (i < index)
			{
				ofs << keep_str[i];
				i++;
			}
			ofs << str2;
			if (keep_str[i + str1.length()] == '\n')
				ofs << std::endl;
			else
				ofs << " ";
		}
		else if (index == 0)
		{
			ofs << str2;
			i += str1.length();
			if (keep_str[i] == '\n')
			{
				while (i <= keep_str.length())
				{
					ofs << keep_str[i];
					i++;
				}
			}
			if (!ifs.eof())
				ofs << " ";
		}
		else if (!ifs.eof())
			ofs << keep_str << " ";
		else
			ofs << keep_str;
		i = 0;
	}
	ifs.close();
}

int main( int argc, char **argv)
{
	std::string str1;
	std::string str2;
	std::string file_name;

	if (argc == 4)
	{
		file_name = argv[1];
		str1 = argv[2];
		str2 = argv[3];
		if (str1 == "" || str2 == "")
		{
			std::cout << "no empty string in this game!" << std::endl;
			return 1;
		}
		read_and_replace(file_name, str1, str2);
	}
	else
	{
		std::cout << "[U S A G E]./replace filename old_string replacement_string" << std::endl;
		return 1;
	}
	return 0;
}
