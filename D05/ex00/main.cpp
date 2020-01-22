#include "Bureaucrat.hpp"

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

int main ( void )
{
	std::string const name = "boring";
	int const nbr = 130;
	std::cout << "\033[0;35m___TEST0__CREATE_REG_BUREAUCRAT___\033[0;0m" << std::endl;
	Bureaucrat b1(name, nbr);
	std::cout << b1;
	std::cout << "\033[0;35m___TEST1__CREATE_BUREAUCRAT_GRADE:-12___\033[0;0m" << std::endl;
	try {
		Bureaucrat too_big("TOO BIG", -12);
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "\033[0;35m___TEST2__CREATE_BUREAUCRAT_GRADE:190___\033[0;0m" << std::endl;
	try {
		Bureaucrat too_big("TOO SMALL", 190);
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "\033[0;35m___TEST3__INCREASE_BUREAUCRAT_BY_150__\033[0;0m" << std::endl;
	std::cout << b1;
	try {
		b1 += 150;
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "\033[0;35m___TEST3__DECREASE_BUREAUCRAT_BY_40__\033[0;0m" << std::endl;
	std::cout << b1;
	try {
		b1 -= 40;
	}
	catch (Bureaucrat::GradeTooHighException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
}