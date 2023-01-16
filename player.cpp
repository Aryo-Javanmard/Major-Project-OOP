#include <iostream>
#include <iomanip>
#include <string>
#include "player.h"

using namespace std;

Player::Player()
{
}

Player::~Player()
{
}


int Player::Character::get_health()
{
    health = 10;
    return health;
}

bool Player::Character::is_dead(int player_health)
{
    if(health <= 0)
    {
        return true;
    } else
    {
        return false;
    }
}


int Player::Character::get_speed()
{
    speed = 5;
    return speed;
}


int Player::Character::get_defence()
{
    defence = 5;
    return defence;
}

char Player::GetInput()
{
    cout << endl;
    cout << setw(62);
	cout << "Make a movement: ";
	cin >> yourInput;

	cout << std::endl;
	//cout << "you said: " << yourInput << std::endl;
	//cout << "first letter: " << yourInput[0] << std::endl;

	cin.clear(); // clear error flags

	cout << endl;
    
	return yourInput[0];
}
