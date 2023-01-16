#include <iostream>
#include "enemy.h"

using namespace std;

int main()
{

    Enemy goblin;


    if(goblin.enemy_health() != 8){
        std::cout << "health err" << endl;
    }
    if(goblin.enemy_speed() < 4 && goblin.enemy_speed() >6){
        std::cout << "speed err" << endl;
    }

    return 0;
}