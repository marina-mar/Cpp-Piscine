#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

//constructors
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : Form(copy.getName(), 145, 137)
{
	*this = copy;
	return;
}

//assign
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

//actions
void			ShrubberyCreationForm::execute(Bureaucrat const &wants_to_execute) const
{
	std::ofstream ofs(this->getName() + "_shrubbery");
	if ((this->getIsSigned() == 1) && (wants_to_execute.getGrade() <= this->getGradeToExecute()))
	{
		ofs << "                                  # #### ####" << std::endl;
		ofs << "                                ### \\/#|### |/####" << std::endl;
		ofs << "                               ##\\/#/ \\||/##/_/##/_#" << std::endl;
		ofs << "                             ###  \\/###|/ \\/ # ###" << std::endl;
		ofs << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		ofs << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
		ofs << "                           __#_--###`  |{,###---###-~" << std::endl;
		ofs << "                                     \\ }{" << std::endl;
		ofs << "                                      }}{" << std::endl;
		ofs << "                                      }}{" << std::endl;
		ofs << "                                 ejm  {{}" << std::endl;
		ofs << "                                , -=-~{ .-^- _" << std::endl;
		ofs << "                                      `}" << std::endl;
		ofs << "                                       {" << std::endl;
		std::cout << "check the file " << this->getName() << "_shrubbery"<< std::endl;
	}
	else if (this->getIsSigned() == 0)
		std::cout << "This form hasn't been signed yet, we can't execute It!!" << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

//operators
std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &say)
{
	o << "_______________________________" << std::endl;
	o << "____Shruberry_Creation_Form____" << std::endl;
	o << "Form Name [ " << say.getName() << " ] " << std::endl;
	o << "Grade to get signed: " << say.getGradeToSign() << std::endl;
	o << "Grade to get executed: " << say.getGradeToExecute() << std::endl;
	if (say.getIsSigned() == 0)
		o << "Is not signed yet..." << std::endl;
	else
		o << "Is signed already!" << std::endl;
	o << "______________________________" << std::endl;
	return o;
}

//destructor
ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}