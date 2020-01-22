#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <istream>
#include <sstream>
#include "Form.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureaucrat {
public:
	//constructors
	Bureaucrat(std::string const name, int const grade);
	Bureaucrat( void );
	Bureaucrat(Bureaucrat &copy);

	//deconstructor
	~Bureaucrat( void );

	//assign
	Bureaucrat &operator=(Bureaucrat &base);

	//actions
	void	signForm(Form &to_sign);
	void	executeForm(Form const & form);

	//operators
	Bureaucrat &operator+=(int const nbr);
	Bureaucrat &operator-=(int const nbr);

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

	//gets
	std::string getName( void ) const;
	int getGrade( void ) const;

	//sets
	void setGrade(int new_value);


private:
	const std::string	_name;
	int					_grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &say);
#endif