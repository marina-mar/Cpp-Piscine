#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}

//so, the important part of this exercise was to understand when to use a ref and when to use a pointer
//few things I realized during the process of doing it:
// ______ ref or pointer _______
//1 . A reference always has to be initialized in the constructor (trough a list initialization)
//2 . So, if you don't get the object as parameter for the constructor, It shouldn't be a ref
//3 . That's why humanA weapon is a ref and humanB weapon is a pointer
//
// ______ to make the pointer point to the acctual memory ______
//1. Trying to implement the pointer, I realize that It wasn't getting the changes from the Weapon (the original object)
//2. A solution I found was to point to the location of a reference of the object.