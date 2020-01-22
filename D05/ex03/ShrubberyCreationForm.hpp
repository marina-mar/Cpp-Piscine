#ifndef SHRUBBERRYCREATIONFORM_H
# define SHRUBBERRYCREATIONFORM_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{

public:
	//constructors
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &copy);

	//actions
	void	execute(Bureaucrat const &executor) const;

	//assign
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	//destructor
	~ShrubberyCreationForm(void);
};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &say);

#endif