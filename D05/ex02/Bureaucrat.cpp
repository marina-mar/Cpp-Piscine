#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

#define print(x)  std::cout << x << std::endl;

//constructors
Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name)
{
	if (grade < MAX_GRADE)
		throw too_high;
	else if (grade > MIN_GRADE)
		throw too_low;
	else
	{
		_grade = grade;
		print("String and Integer constructor called, Bureaucrat created");
	}
}
Bureaucrat::Bureaucrat( void ) : _name("")
{
	_grade = 150;
	print("Default constructor called, Bureaucrat created");
}
Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	*this = copy;
	print("Copy constructor called, Bureaucrat created");
};

//actions
void	Bureaucrat::executeForm(Form const &form)
{
	if (form.getIsSigned() == 0)
		std::cout << _name << " cannot execute form " << form.getName() << " because It's not signed!" << std::endl;
	else if (_grade > form.getGradeToExecute())
		std::cout << _name << " cannot execute form " << form.getName() << " because his grade is too low" << std::endl;
	else
		std::cout << _name << " executes form " << form.getName() << std::endl;
}
void	Bureaucrat::signForm(Form &to_sign)
{
	if (_grade > to_sign.getGradeToSign())
		std::cout << _name << " cannot sign form " << to_sign.getName() << " because his grade is too low" << std::endl;
	else
		std::cout << _name << " signs form " << to_sign.getName() << std::endl;
}
//gets
std::string 	Bureaucrat::getName ( void ) const
{
	return this->_name;
}

int	Bureaucrat::getGrade ( void ) const
{
	return this->_grade;
}

//sets
void Bureaucrat::setGrade(int new_value)
{
	this->_grade = new_value;
}

//assign
Bureaucrat 	&Bureaucrat::operator =(Bureaucrat &assign)
{
	_grade = assign.getGrade();
	return *this;
}

//Operators
std::ostream &operator<<(std::ostream &o, Bureaucrat const &say)
{
	o << say.getName() << ", bureaucrat grade " << say.getGrade() << std::endl;
	return o;
}
Bureaucrat &Bureaucrat::operator+=(int const nbr)
{
	if ((_grade - nbr) < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = _grade - nbr;
	return *this;
}
Bureaucrat &Bureaucrat::operator-=(int const nbr)
{
	if ((_grade + nbr) > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	_grade = _grade + nbr;
	return *this;
}

//destructor
Bureaucrat::~Bureaucrat( void ) {
	print("Destructor called, Bureaucrat destructed");
}

//////////////////////////////////////////////////////////////
//GradeTooHighException Class
//constructors
Bureaucrat::GradeTooHighException::GradeTooHighException( void )
{
	return ;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
	return ;
}

//deconstructor
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

//assign
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &base)
{
	(void)base;
	return *this;
}

//This class has a virtual member function called what that returns a null-terminated character sequence (of type char *)
//and that can be overwritten in derived classes to contain some sort of description of the exception.
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[0;31m ERROR::: GRADE TOO HIGH (grade < 1)\033[0;0m");
}

//////////////////////////////////////////////////////////////
//GradeTooLowException Class
//constructors
Bureaucrat::GradeTooLowException::GradeTooLowException( void )
{
	return ;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
	return ;
}
//deconstructor
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

//assign
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &base)
{
	(void)base;
	return *this;
}

//This class has a virtual member function called what that returns a null-terminated character sequence (of type char *)
//and that can be overwritten in derived classes to contain some sort of description of the exception.
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[0;31m ERROR::: GRADE TOO LOW (grade > 150)\033[0;0m");
}