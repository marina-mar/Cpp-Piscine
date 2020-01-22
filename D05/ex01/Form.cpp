#include "Form.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>

#define print(x)  std::cout << x << std::endl;

//constructors
Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute)
: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	_isSigned = 0; //not signed
	print("String and Integer constructor called, Form created");

}
Form::Form( void ) : _name(""), _isSigned(0), _gradeToSign(150), _gradeToExecute(1)
{
	print("Default constructor called, Form created");
}

Form::Form(Form &copy) :
_name(copy.getName()), _isSigned(copy._isSigned), _gradeToSign(copy.getGradeToSign()), _gradeToExecute(copy.getGradeToExecute())
{
	*this = copy;
	print("Copy constructor called, Form created");
};
//actions
void	Form::beSigned(Bureaucrat &check)
{
	if(check.getGrade() > getGradeToSign())
		throw too_low;
	else
		_isSigned = 1;
}
//gets
std::string 	Form::getName ( void ) const
{
	return this->_name;
}

int	Form::getGradeToSign( void ) const
{
	return this->_gradeToSign;
}

int	Form::getGradeToExecute( void ) const
{
	return this->_gradeToExecute;
}

bool	Form::getIsSigned() const
{
	return this->_isSigned;
}

//assign
Form 	&Form::operator =(Form &assign)
{
	_isSigned = assign._isSigned;
	return *this;
}

//Operators
std::ostream &operator<<(std::ostream &o, Form const &say)
{
	o << "_____________________________" << std::endl;
	o << "Form Name [ " << say.getName() << " ] " << std::endl;
	o << "Grade to get signed: " << say.getGradeToSign() << std::endl;
	o << "Grade to get executed: " << say.getGradeToExecute() << std::endl;
	if (say.getIsSigned() == 0)
		o << "Is not signed yet..." << std::endl;
	else
		o << "Is signed already!" << std::endl;
	o << "_____________________________" << std::endl;
	return o;
}

//destructor
Form::~Form( void ) {
	print("Destructor called, Form destructed");
}

//////////////////////////////////////////////////////////////
//GradeTooHighException Class
//constructors
Form::GradeTooHighException::GradeTooHighException( void )
{
	return ;
}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
	*this = src;
	return ;
}

//deconstructor
Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

//assign
Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &base)
{
	(void)base;
	return *this;
}

//This class has a virtual member function called what that returns a null-terminated character sequence (of type char *)
//and that can be overwritten in derived classes to contain some sort of description of the exception.
const char* Form::GradeTooHighException::what() const throw()
{
	return ("\033[0;31m ERROR::: GRADE TOO HIGH\033[0;0m");
}

//////////////////////////////////////////////////////////////
//GradeTooLowException Class
//constructors
Form::GradeTooLowException::GradeTooLowException( void )
{
	return ;
}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
	*this = src;
	return ;
}
//deconstructor
Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

//assign
Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &base)
{
	(void)base;
	return *this;
}

//This class has a virtual member function called what that returns a null-terminated character sequence (of type char *)
//and that can be overwritten in derived classes to contain some sort of description of the exception.
const char* Form::GradeTooLowException::what() const throw()
{
	return ("\033[0;31m ERROR::: GRADE TOO LOW\033[0;0m");
}