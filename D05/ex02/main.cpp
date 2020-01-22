#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
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
	std::cout << "\033[0;35m___TEST0__CREATE_REG_BUREAUCRATS___\033[0;0m" << std::endl;
	Bureaucrat b1("Aboba", 130);
	std::cout << b1;
	Bureaucrat b2("Tunico", 40);
	std::cout << b2;
	Bureaucrat b3("Can sign anything", 1);
	std::cout << b3;

	std::cout << "\033[0;35m___TEST1__CREATE_ALL_FORMS___\033[0;0m" << std::endl;
	PresidentialPardonForm f1("Marialita");
	std::cout << f1;
	RobotomyRequestForm f2("Juan");
	std::cout << f2;
	ShruberryCreationForm f3("Poriar");
	std::cout << f3;

	std::cout << "\033[0;35m___TEST2_TRY_EXEC_WITH_NO_SIGNATURE__\033[0;0m" << std::endl;
	try {
		b1.executeForm(f1);
		f1.execute(b3);
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
	try {
		b2.executeForm(f1);
		f2.execute(b3);
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
	try {
		b3.executeForm(f1);
		f3.execute(b3);
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

	std::cout << "\033[0;35m....sign all....\033[0;0m" << std::endl;
	try {
		f1.beSigned(b3);
		f2.beSigned(b3);
		f3.beSigned(b3);
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
	std::cout << f1 << f2 << f3 << std::endl;

	std::cout << "\033[0;35m___TEST3_TRY_EXEC_PRESIDENTIAL_FORM___\033[0;0m" << std::endl;
	std::cout << "\033[0;35mWith grade: " << b1.getGrade() << "\033[0;0m" << std::endl;
	try {
		b1.executeForm(f1);
		f1.execute(b1);
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
	std::cout << "\033[0;35mWith grade: " << b2.getGrade() << "\033[0;0m" << std::endl;
	try {
		b2.executeForm(f1);
		f1.execute(b2);
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
	std::cout << "\033[0;35mWith grade: " << b3.getGrade() << "\033[0;0m" << std::endl;
	try {
		b3.executeForm(f1);
		f1.execute(b3);
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

	std::cout << "\033[0;35m___TEST4_TRY_EXEC_ROBOTOMY_FORM___\033[0;0m" << std::endl;
	std::cout << "\033[0;35mWith grade: " << b1.getGrade() << "\033[0;0m" << std::endl;
	try {
		b1.executeForm(f2);
		f2.execute(b1);
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
	std::cout << "\033[0;35mWith grade: " << b2.getGrade() << "\033[0;0m" << std::endl;
	try {
		b2.executeForm(f2);
		f2.execute(b2);
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
	std::cout << "\033[0;35mWith grade: " << b3.getGrade() << "\033[0;0m" << std::endl;
	try {
		b3.executeForm(f2);
		f2.execute(b3);
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

	std::cout << "\033[0;35m___TEST5_TRY_EXEC_SHRUBBERY_FORM___\033[0;0m" << std::endl;
	std::cout << "\033[0;35mWith grade: " << b1.getGrade() << "\033[0;0m" << std::endl;
	try {
		b1.executeForm(f3);
		f3.execute(b1);
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
	std::cout << "\033[0;35mWith grade: " << b2.getGrade() << "\033[0;0m" << std::endl;
	try {
		b2.executeForm(f3);
		f3.execute(b2);
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
	std::cout << "\033[0;35mWith grade: " << b3.getGrade() << "\033[0;0m" << std::endl;
	try {
		b3.executeForm(f3);
		f3.execute(b2);
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
	std::cout << "\033[0;35m_____________________________________________\033[0;0m" << std::endl;
}