#ifndef RANGEENEMY_CLASS_HPP
#define RANGEENEMY_CLASS_HPP

#include "Enemy.class.hpp"
class RangeEnemy : public Enemy
{
public:
	//constructors
	RangeEnemy( void );
	RangeEnemy(RangeEnemy const &copy);

	//destructor
	~RangeEnemy( void );

	//assign
	//RangeEnemy &operator=(RangeEnemy const &base);

	//actions
	void    rangeAtack( void );

	//print
	void	printStatus( void );
};

#endif