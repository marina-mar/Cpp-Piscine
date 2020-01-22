#ifndef SHRUBERRYCREATIONFORM_H
# define SHRUBERRYCREATIONFORM_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	ShruberryCreationForm : public Form
{

public:
	//constructors
	ShruberryCreationForm(void);
	ShruberryCreationForm(std::string target);
	ShruberryCreationForm(ShruberryCreationForm &copy);

	//actions
	void	execute(Bureaucrat const &executor) const;

	//assign
	ShruberryCreationForm &operator=(ShruberryCreationForm const &other);

	//destructor
	~ShruberryCreationForm(void);
};

std::ostream	&operator<<(std::ostream &o, ShruberryCreationForm const &say);

#endif