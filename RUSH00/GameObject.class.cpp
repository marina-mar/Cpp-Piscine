#include "GameObject.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <istream>
#include <sstream>
#include <time.h>

using namespace std;
#define print(x)  cout << x << endl;

//general level attributes, all static so they keep their values in all objects:
unsigned int gameObject::_ptsToNextLvl = 10;
unsigned int gameObject::_lvl = 0;

//constructors
gameObject::gameObject( void )
{
	//define with size of screen the maxX and maxY:
	_maxX = 200;
	_maxY = 200;
	_xPos = 0;
	_yPos = 0;
	_Id = '.';
	_lvl = 0;
	print("gameObject Default constructor called");
}

gameObject::gameObject(gameObject const &copy)
{
	*this = copy;
	print("gameObject Copy constructor called");
}

//destructor
gameObject::~gameObject( void )
{
	print("gameObject Destroyed");
}

//assign
gameObject &gameObject::operator=(gameObject const &base)
{
	_xPos = base._xPos;
	_yPos = base._yPos;
	//_curRoom = base._curRoom;
	_Id = base._Id;
	_lvl = base._lvl;
	print("gameObject Assignation operator called");
	return *this;
}

//prints
void	gameObject::printObject( void )
{
	int line = get_ySize();
	int size = get_xSize();
	while (line > 0)
	{
		while (size > 0)
		{
			cout << get_Id();
			size--;
		}
		cout << endl;
		line--;
		size = get_xSize();
	}
}

//gets
unsigned int     gameObject::get_xPos( void )
{
	return this->_xPos;
}
unsigned int    gameObject::get_yPos( void )
{
	return this->_yPos;
}
unsigned int    gameObject::get_maxX( void )
{
	return this->_maxX;
}
unsigned int    gameObject::get_maxY( void )
{
	return this->_maxY;
}
int             gameObject::get_xSize( void )
{
	return this->_xSize;
}
int             gameObject::get_ySize( void )
{
	return this->_ySize;
}
/*Room            gameObject::get_curRoom( void )
{
	return this->_curRoom;
}*/
char     		gameObject::get_Id( void )
{
	return this->_Id;
}
unsigned int	gameObject::get_ptsToNextLvl( void )
{
	return this->_ptsToNextLvl;
}
unsigned int    gameObject::get_lvl( void )
{
	return this->_lvl;
}

//sets
void    gameObject::set_xPos(unsigned int new_value)
{
	this->_xPos = new_value;
}
void    gameObject::set_yPos(unsigned int new_value)
{
	this->_yPos = new_value;
}
void    gameObject::set_maxX(unsigned int new_value)
{
	this->_maxX = new_value;
}
void    gameObject::set_maxY(unsigned int new_value)
{
	this->_maxY = new_value;
}
void    gameObject::set_xSize(int new_value)
{
	this->_xSize = new_value;
}
void    gameObject::set_ySize(int new_value)
{
	this->_ySize = new_value;
}
/*void    gameObject::set_curRoom(Room new_value)
{
	this->_curRoom = new_value;
}*/
void    gameObject::set_Id(char new_value)
{
	this->_Id = new_value;
}
void    gameObject::set_lvl(unsigned int new_value)
{
	this->_lvl = new_value;
}