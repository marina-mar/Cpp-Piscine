#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "OfficeBlock.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

OfficeBlock::OfficeBlock(void)
{
	_intern = new Intern();
	_signer = new Bureaucrat("Pablo", 15);
	_executer = new Bureaucrat("Ana", 7);
	std::cout << "\033[0;36m____________Office_Block_Created____________\033[0;0m" << std::endl;
	std::cout << "One random silent intern with gum in the corner" << std::endl;
	std::cout << "The signer bureaucrat is sitting in a nice table" << std::endl;
	std::cout << "Signer bureaucrat name: " << _signer->getName() << ", Grade: " << _signer->getGrade() << std::endl;
	std::cout << "The executer bureaucrat is walking around his messy table...." << std::endl;
	std::cout << "Executer bureaucrat name: " << _executer->getName() << ", Grade: " << _executer->getGrade() << std::endl;
	std::cout << "\033[0;36m___________________________________________\033[0;0m" << std::endl;
}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer) : _intern(&intern), _signer(&signer), _executer(&executer)
{
	std::cout << "\033[0;36m____________Office_Block_Created____________\033[0;0m" << std::endl;
	std::cout << "One random silent intern with gum in the corner" << std::endl;
	std::cout << "The signer bureaucrat is sitting in a nice table" << std::endl;
	std::cout << "Signer bureaucrat name: " << _signer->getName() << ", Grade: " << _signer->getGrade() << std::endl;
	std::cout << "The executer bureaucrat is walking around his messy table...." << std::endl;
	std::cout << "Executer bureaucrat name: " << _executer->getName() << ", Grade: " << _executer->getGrade() << std::endl;
	std::cout << "\033[0;36m_____________________________________________\033[0;0m" << std::endl;;
	return;
}

OfficeBlock::~OfficeBlock(void)
{
	return;
}

void			OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form *creation = NULL;

	creation =_intern->makeForm(form, target);

	if (this->_signer->getGrade() > creation->getGradeToSign())
	{
		throw OfficeBlock::LowSignGrade();
	}
	creation->beSigned(*_signer);
	if (this->_signer->getGrade() > creation->getGradeToExecute())
	{
		throw OfficeBlock::LowExecGrade();
	}
	this->_executer->executeForm(*creation);
	creation->execute(*_executer);
	return;
}

void			OfficeBlock::setIntern(Intern &new_value)
{
	this->_intern = &new_value;
	return;
}

void			OfficeBlock::setSigner(Bureaucrat &new_value)
{
	this->_signer = &new_value;
	return;
}

void			OfficeBlock::setExecutor(Bureaucrat &new_value)
{
	this->_executer = &new_value;
	return;
}

// exceptions
// LowSignGrade
OfficeBlock::LowSignGrade::LowSignGrade(void)
{
	return;
}

OfficeBlock::LowSignGrade::LowSignGrade(LowSignGrade const &copy)
{
	*this = copy;
	return;
}

OfficeBlock::LowSignGrade::~LowSignGrade(void) throw()
{
	return;
}

OfficeBlock::LowSignGrade &OfficeBlock::LowSignGrade::operator=(LowSignGrade const &other)
{
	(void)other;
	return (*this);
}

const char* OfficeBlock::LowSignGrade::what() const throw()
{
	return ("\033[0;31m ERROR: Signer's Grade is too low to sign this form");
}

// LowExecGrade
OfficeBlock::LowExecGrade::LowExecGrade(void)
{
	return;
}

OfficeBlock::LowExecGrade::LowExecGrade(LowExecGrade const &copy)
{
	*this = copy;
	return;
}

OfficeBlock::LowExecGrade::~LowExecGrade(void) throw()
{
	return;
}

OfficeBlock::LowExecGrade &OfficeBlock::LowExecGrade::operator=(LowExecGrade const &other)
{
	(void)other;
	return (*this);
}

const char* OfficeBlock::LowExecGrade::what() const throw()
{
	return ("\033[0;31m ERROR: Your office block doesn't have enough grade to execute this form =(");
}