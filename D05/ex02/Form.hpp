#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class Form {
public:
	//constructors
	Form(std::string const name, int const gradeToSign, int const gradeToExecute);
	Form( void );
	Form(Form &copy);

	//deconstructor
	~Form( void );

	//assign
	Form &operator=(Form &base);

	//actions
	void	beSigned(Bureaucrat &check);

	//gets
	std::string getName( void ) const;
	int		getGradeToSign( void ) const;
	int		getGradeToExecute( void ) const;
	bool	getIsSigned( void ) const;

	//exceptions
	class GradeTooHighException : public std::exception
	{
	public:
		//constructors
		GradeTooHighException( void );
		GradeTooHighException(GradeTooHighException const &copy);
		//deconstructor
		virtual ~GradeTooHighException(void) throw();

		//This class has a virtual member function called what that returns a null-terminated character sequence (of type char *)
		//and that can be overwritten in derived classes to contain some sort of description of the exception.
		virtual const char* what() const throw();

		//assign
		GradeTooHighException &operator=(GradeTooHighException const &base);
	} too_high;

	class GradeTooLowException : public std::exception
	{
	public:
		//constructors
		GradeTooLowException( void );
		GradeTooLowException(GradeTooLowException const &copy);
		//deconstructor
		virtual ~GradeTooLowException(void) throw();

		//This class has a virtual member function called what that returns a null-terminated character sequence (of type char *)
		//and that can be overwritten in derived classes to contain some sort of description of the exception.
		virtual const char* what() const throw();

		//assign
		GradeTooLowException &operator=(GradeTooLowException const &base);
	} too_low;

private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &say);
#endif