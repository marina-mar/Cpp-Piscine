#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

int main ( void )
{
	std::cout << "\033[0;35m___TEST0__CREATE_CREW_AND_TRY_RUNNING_FORMS____\033[0;0m" << std::endl;
	Intern intern;
	Bureaucrat signer("Jefferson", 20);
	Bureaucrat executer("Cornelia", 10);
	OfficeBlock office1(intern, signer, executer);
	try {
		office1.doBureaucracy("robotomy request", "Bender");
	}
	catch (Form::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	try {
		office1.doBureaucracy("Shrubbery Creation", "Temper");
	}
	catch (Form::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	try {
		office1.doBureaucracy("PresidentialPardon", "Borocos");
	}
	catch (Form::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "\033[0;35m________________________________\033[0;0m" << std::endl;
}