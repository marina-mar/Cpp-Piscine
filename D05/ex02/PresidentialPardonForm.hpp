#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
public:
	//constructors
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &copy);

	//actions
	void	execute(Bureaucrat const &executor) const;

	//assign
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

	//destructor
	~PresidentialPardonForm(void);
};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &say);

#endif