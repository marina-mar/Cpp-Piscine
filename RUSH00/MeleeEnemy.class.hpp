#ifndef MELEEENEMY_CLASS_HPP
#define MELEEENEMY_CLASS_HPP

#include "Enemy.class.hpp"

class MeleeEnemy : public Enemy
{
public:
	//constructors
	MeleeEnemy( void );
	MeleeEnemy(MeleeEnemy const &copy);

	//destructor
	~MeleeEnemy( void );

	//assign
	//MeleeEnemy &operator=(MeleeEnemy const &base);

	//actions
	void    meeleAtack( void );

	//prints
	void printStatus( void );
};

#endif