#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "RobotomyRequestForm.hpp"

//constructors
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : Form(copy.getName(), 72, 45)
{
	*this = copy;
	return;
}

//assign
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	(void)other;
	return (*this);
}

//actions
void			RobotomyRequestForm::execute(Bureaucrat const &wants_to_execute) const
{

	if ((this->getIsSigned() == 1) && (wants_to_execute.getGrade() <= this->getGradeToExecute()))
	{
		std::cout << "* pzzzzz trrrrrr pz pz pz brrrrrr *" << std::endl;
		std::cout << this->getName() << " has been robotomized successfully 30%..." << std::endl;
		std::cout << this->getName() << " has been robotomized successfully 35%..." << std::endl;
		std::cout << this->getName() << " has been robotomized successfully 40%..." << std::endl;
		std::cout << this->getName() << " has been robotomized successfully 45%..." << std::endl;
		std::cout << this->getName() << " has been robotomized successfully 50%..." << std::endl;
		std::cout << this->getName() << " has been robotomized successfully 50%.." << std::endl;
		std::cout << this->getName() << " has been robotomized successfully 50%." << std::endl;
		std::cout << this->getName() << " failure" << std::endl;
		std::cout << this->getName() << " failure!" << std::endl;
		std::cout << this->getName() << " failure!!" << std::endl;
	}
	else if (this->getIsSigned() == 0)
		std::cout << "This form hasn't been signed yet, we can't execute It!!" << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

//operators
std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &say)
{
	o << "________________________________" << std::endl;
	o << "____Robotomy_Request_Form____" << std::endl;
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
RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}