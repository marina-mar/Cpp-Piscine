#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	RobotomyRequestForm : public Form
{

public:
	//constructors
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &copy);

	//actions
	void	execute(Bureaucrat const &executor) const;

	//assign
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

	//destructor
	~RobotomyRequestForm(void);
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &say);

#endif