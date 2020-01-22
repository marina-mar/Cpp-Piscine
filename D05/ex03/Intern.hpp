#ifndef Intern_H
# define Intern_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class	Intern
{

public:

	//constructors
	Intern(void);
	Intern(Intern &copy);

	//actions
	Form	*makeForm(std::string form, std::string target);

	//assign
	Intern &operator=(Intern const &r);

	//destructor
	~Intern(void);
};

#endif