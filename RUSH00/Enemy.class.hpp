#ifndef ENEMY_CLASS_HPP
#define ENEMY_CLASS_HPP

#include "GameObject.class.hpp"

class Enemy : public gameObject
{
public:
	//constructors
	Enemy( void );
	Enemy(Enemy const &copy);

	//destructor
	~Enemy( void );

	//assign
	Enemy &operator=(Enemy const &base);

	//actions
	void    move(int dir_x, int dir_y);

	//prints
	//print
	void	printStatus( void );

	//gets
	unsigned int	get_speed( void );
	unsigned int    get_dmg( void );
	unsigned int    get_hp( void );
	unsigned int	get_maxHp( void );

	//sets
	void	set_speed(unsigned int new_value);
	void    set_dmg(unsigned int new_value);
	void    set_hp(unsigned int new_value);
	void	set_maxHp(unsigned int new_value);

private:
	unsigned int	_speed;
	unsigned int	_dmg;
	unsigned int	_hp;
	unsigned int	_maxHp;
};

#endif