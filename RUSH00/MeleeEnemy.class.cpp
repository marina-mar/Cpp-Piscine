#include "MeleeEnemy.class.hpp"
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

MeleeEnemy::MeleeEnemy( void )
{
	srand (time(NULL));
	int random = rand() % 3;
	set_speed(random * get_lvl());
	set_dmg(1 * get_lvl());
	set_hp(1 * get_lvl());
	set_maxHp(1 * get_lvl());
	set_xSize(2);
	set_ySize(1);
	print("MeleeEnemy Default constructor called");
}
MeleeEnemy::MeleeEnemy(MeleeEnemy const &copy)
{
	*this = copy;
	print("MeleeEnemy Copy constructor called");
}
//destructor
MeleeEnemy::~MeleeEnemy( void )
{
	print("MeleeEnemy Destroyed");
}

//assign
/*MeleeEnemy &MeleeEnemy::operator=(MeleeEnemy const &base)
{

	return *this;
}*/

//actions
void    MeleeEnemy::meeleAtack( void )
{
	//needs bullet
}

//print
void	MeleeEnemy::printStatus( void )
{
	print("____________Melee__Enemy____________");
	Enemy::printStatus();
}