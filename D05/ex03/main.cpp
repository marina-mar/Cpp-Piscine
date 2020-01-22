#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

int main ( void )
{
	std::cout << "\033[0;35m___TEST0__CREATE_REG_ALL_FORMS__\033[0;0m" << std::endl;
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf;
	delete rrf;
	rrf = someRandomIntern.makeForm("Shrubbery Creation", "Temper");
	std::cout << *rrf;
	delete rrf;
	rrf = someRandomIntern.makeForm("PresidentialPardon", "Borocos");
	std::cout << *rrf;
	delete rrf;
	std::cout << "\033[0;35m________________________________\033[0;0m" << std::endl;
}