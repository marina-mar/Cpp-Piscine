#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "PresidentialPardonForm.hpp"

//constructors
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : Form(copy.getName(), 25, 5)
{
	*this = copy;
	return;
}

//assign
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

//actions
void			PresidentialPardonForm::execute(Bureaucrat const &wants_to_execute) const
{
	if ((this->getIsSigned() == 1) && (wants_to_execute.getGrade() <= this->getGradeToExecute()))
		std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	else if (this->getIsSigned() == 0)
		std::cout << "This form hasn't been signed yet, we can't execute It!!" << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

//operators
std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &say)
{
	o << "________________________________" << std::endl;
	o << "____Presidential_Pardon_Form____" << std::endl;
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
PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}