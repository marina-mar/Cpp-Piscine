#include "Enemy.class.hpp"
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

Enemy::Enemy( void )
{
	srand (time(NULL));

	int random1 = rand() % 3;
	int random2 = rand() % get_maxY(); //to put the enemy in a random position Y in the screen

	_speed = random1 * get_lvl();
	_dmg = 0;
	_hp = 100;
	_maxHp = 100;
	set_xPos(get_maxX()); //and they start in the end of the screen (on the right, maxX)
	set_yPos(random2);
	set_Id('X');
	print("Enemy Default constructor called");
}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
	print("Enemy Copy constructor called");
}

//destructor
Enemy::~Enemy( void )
{
	print("~~ Enemy destroyed!");
}

//assign
Enemy &Enemy::operator=(Enemy const &base)
{
	_speed = base._speed;
	_dmg = base._speed;
	_hp = base._speed;
	_maxHp = base._speed;
	return *this;
}

//actions

//about move():
//((RIGHT)) ((POSITIVE X))
//((LEFT))  ((NEGATIVE X))
// ((UP))   ((POSITIVE Y))
//((DOWN))  ((NEGATIVE Y))
void    Enemy::move(int x_dir, int y_dir)
{
	//if the is moving to the right and is the end of screen, turn back (shouldn't happen to enemies, but...)
	if (x_dir > 0 && get_xPos() == get_maxX())
		x_dir = x_dir * -1;
	//considering that enemies always move to the left, if they get to the end of the screen they are destroyed:
	else if (x_dir < 0 && get_xPos() == 0)
		Enemy::~Enemy();
	else
		this->set_xPos(get_xPos() + x_dir);
	//if it gets to the top of the screen, has to move down instead of up and vice-versa
	if ((y_dir > 0 && get_yPos() == get_maxY()) || (y_dir < 0 && get_yPos() == 0))
		y_dir = y_dir * -1;
	this->set_yPos(get_yPos() + y_dir);
}

//prints
void	Enemy::printStatus( void )
{
	print("_______________status_______________");
	print("       ___about_the_object___");
	printObject();
	cout << "[ Id: " << get_Id() << " ] [ X Size: " << get_xSize() << " ] [ Y Size: " << get_ySize() << " ]" << endl;
	cout << "[ Y_pos: " << get_yPos() << " ] [ X_pos: " << get_xPos() <<  " ]" << endl;
	cout << "[ Damage: " << get_dmg() << " ] [ Speed: " << get_speed() <<  " ]" << endl;
	cout << "[ HP: " << get_hp() <<  " ] [ Max HP: " << get_maxHp() <<  " ]" << endl;
	print("       ___about_the_game___");
	cout << "[ Level: " << get_lvl() << " ] [ Points to next level: " << get_ptsToNextLvl() << " ]" << endl;
	cout << "[ Max X: " << get_maxX() << " ] [ Max Y" << get_maxY() <<  " ]" << endl;
	print("_____________________________________");
}

//gets
unsigned int	Enemy::get_speed( void )
{
	return this->_speed;
}
unsigned int    Enemy::get_dmg( void )
{
	return this->_dmg;
}
unsigned int    Enemy::get_hp( void )
{
	return this->_hp;
}
unsigned int	Enemy::get_maxHp( void )
{
	return this->_maxHp;
}

//sets
void	Enemy::set_speed(unsigned int new_value)
{
	this->_speed = new_value;
}
void    Enemy::set_dmg(unsigned int new_value)
{
	this->_dmg = new_value;
}
void    Enemy::set_hp(unsigned int new_value)
{
	this->_hp = new_value;
}
void	Enemy::set_maxHp(unsigned int new_value)
{
	this->_maxHp = new_value;
}