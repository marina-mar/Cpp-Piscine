#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

int main ( void )
{
	std::cout << "\033[0;35m___TEST0__CREATE_TWO_REG_BUREAUCRATS___\033[0;0m" << std::endl;
	Bureaucrat b1("Boring and cant sign", 130);
	std::cout << b1;
	Bureaucrat b2("Angry and can sign", 2);
	std::cout << b2;
	std::cout << "\033[0;35m___TEST1__CREATE_REG_FORM___\033[0;0m" << std::endl;
	Form f1("important form", 10, 5);
	std::cout << f1;
	std::cout << "\033[0;35m___TEST2__CAN'T_SIGN___\033[0;0m" << std::endl;
	try {
		b1.signForm(f1);
		f1.beSigned(b1);
	}
	catch (Form::GradeTooHighException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (Form::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "\033[0;35m___TEST3__SHOW_FORM_STATUS___\033[0;0m" << std::endl;
	std::cout << f1;
	std::cout << "\033[0;35m___TEST4__CAN_SIGN___\033[0;0m" << std::endl;
	try {
		b2.signForm(f1);
		f1.beSigned(b2);
	}
	catch (Form::GradeTooHighException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (Form::GradeTooLowException &error)
	{
		std::cout << error.what() << std::endl;
	}
	catch (const std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "\033[0;35m___TEST5__SHOW_FORM_STATUS___\033[0;0m" << std::endl;
	std::cout << f1;
}