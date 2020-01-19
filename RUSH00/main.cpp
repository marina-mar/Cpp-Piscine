#include "MeleeEnemy.class.hpp"
#include "RangeEnemy.class.hpp"
#include "GameObject.class.hpp"
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

int main( void )
{
	MeleeEnemy enemy1;
	RangeEnemy enemy2;

	cout << enemy1.get_xPos() << endl;
	enemy1.move(1, 0);
	cout << enemy1.get_xPos() << endl;
	enemy1.printStatus();
	enemy2.printStatus();
}