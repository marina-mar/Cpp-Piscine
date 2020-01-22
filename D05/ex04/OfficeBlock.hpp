#ifndef OFFICEBLOCK_H
# define OFFICEBLOCK_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

class	OfficeBlock
{
public:
	//constructors:
	OfficeBlock(void);
	OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer); //better to be reference because then cant be void

	//destructor
	~OfficeBlock(void);

	//sets
	void	setIntern(Intern &new_value);
	void	setSigner(Bureaucrat &new_value);
	void	setExecutor(Bureaucrat &new_value);

	//actions
	void	doBureaucracy(std::string form, std::string target);

	//exceptions
	class LowSignGrade : public std::exception
	{
	public:

		LowSignGrade(void);
		LowSignGrade(LowSignGrade const &obj);
		virtual ~LowSignGrade(void) throw();
		LowSignGrade &operator=(LowSignGrade const &r);
		virtual const char* what() const throw();
	};

	class LowExecGrade : public std::exception
	{
	public:

		LowExecGrade(void);
		LowExecGrade(LowExecGrade const &obj);
		virtual ~LowExecGrade(void) throw();
		LowExecGrade &operator=(LowExecGrade const &r);
		virtual const char* what() const throw();
	};

private:

	OfficeBlock(OfficeBlock &obj);
	OfficeBlock &operator=(OfficeBlock const &r);

	Intern		*_intern;
	Bureaucrat	*_signer;
	Bureaucrat	*_executer;
};

#endif