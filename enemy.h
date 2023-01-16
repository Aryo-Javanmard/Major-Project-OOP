#include <iostream>

#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
public:

    int health;
    int speed;

    Enemy();
    ~Enemy();

    int enemy_health();
    int enemy_speed();
    //bool enemy_is_dead();

};

#endif