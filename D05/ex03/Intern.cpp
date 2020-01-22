#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern created by Default Constructor" << std::endl;
	return;
}

Intern::Intern(Intern &copy)
{
	std::cout << "Intern created by Copy Constructor" << std::endl;
	*this = copy;
	return;
}

//assign
Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

//actions
Form		*Intern::makeForm(std::string form, std::string target)
{
	if (form == "ShrubberyCreation" || form == "shrubbery creation" || form == "Shrubbery Creation")
	{
		std::cout << "~ Intern creates " << form << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form == "RobotomyRequest" || form == "robotomy request" || form == "Robotomy Request")
	{
		std::cout << "~ Intern creates " << form << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form == "PresidentialPardon" || form == "presidential pardon" || form == "Presidential Pardon")
	{
		std::cout << "~ Intern creates " << form << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else
		std::cout << "Itern couldn't create " << form << std::endl;
	return (NULL);
}

//destructor
Intern::~Intern(void)
{
	return;
}