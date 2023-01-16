#include <iostream>
#include <iomanip>
#include "battle.h"

using namespace std;

bool Battle::battle_enemy_1(int player_health, int enemy_1_health, int player_speed, int player_defence, int enemy_speed_1)
{
    // while player health or enemy health is greater than 0, keep iterating
    while (player_health > 0 || enemy_1_health > 0)
    {
        //player defence increases health
        player_health += player_defence;

        // get player input 
        std::cout << std::setw(66);
        std::cout << "Will you attack?  Y/N" << endl;
        cin >> your_attack;

        //input validation
        if (your_attack[0] == 'Y'|| your_attack[0] == 'y')
        {
            //if player speed > enemy speed, player attacks first with a damage bonus
            if (player_speed > enemy_speed_1)
            {
                int player_damage = rand() % 2+6;
                enemy_1_health -= player_damage;

                int enemy_damage = rand() % 2+5;
                player_health -= enemy_damage + player_defence;
                
                // display player health and enemy health
                std::cout << std::setw(58);
                std::cout << "Your Health: " << player_health << "   Enemy's Health: " << enemy_1_health << endl;
                std::cout << endl;

                if (player_health < 0 || enemy_1_health < 0)
                {
                    break;
                }

                // if enemy speed > player speed, enemy attacks with damage bonus.
            } else
            {
                int enemy_damage = rand() % 2+5;
                player_health -= enemy_damage;

                int player_damage = rand() % 2+6;
                enemy_1_health -= player_damage;


                // display player health and enemy health
                std::cout << std::setw(58);
                std::cout << "Your Health: " << player_health << "   Enemy's Health: " << enemy_1_health << endl;
                std::cout << endl;

                if (player_health < 0 || enemy_1_health < 0)
                {
                    break;
                }
            }
        } else if (your_attack[0] == 'N' || your_attack[0] == 'n')
        {
            player_health = 0;
            break;
        }
    }

    if(player_health <= 0)
    {
        return false;
    } else
    {
        return true;
    }
}


bool Battle::battle_enemy_2(int player_health, int enemy_2_health, int player_speed, int player_defence, int enemy_speed_2)
{
     while (player_health > 0 || enemy_2_health > 0)
    {
        player_health += player_defence;

        std::cout << std::setw(66);
        std::cout << "Will you attack?  Y/N" << endl;
        cin >> your_attack;

        if (your_attack[0] -= 32 == 'Y')
        {
            if (player_speed > enemy_speed_2)
            {
                int player_damage = rand() % 2+6;
                enemy_2_health -= player_damage;

                int enemy_damage = rand() % 2+5;
                player_health -= enemy_damage + player_defence;

                std::cout << std::setw(58);
                std::cout << "Your Health: " << player_health << "   Enemy's Health: " << enemy_2_health << endl;
                std::cout << endl;

                if (player_health < 0 || enemy_2_health < 0)
                {
                    break;
                }
            }
            else
            {
                int enemy_damage = rand() % 2+5;
                player_health -= enemy_damage + player_defence;

                int player_damage = rand() % 2+6;
                enemy_2_health -= player_damage;

                std::cout << std::setw(58);
                std::cout << "Your Health: " << player_health << "   Enemy's Health: " << enemy_2_health << endl;
                std::cout << endl;

                if (player_health < 0 || enemy_2_health < 0)
                {
                    break;
                }
            }
        } else
        {
            player_health = 0;
        }
    }

    if(player_health <= 0)
    {
        return false;
    } else
    {
        return true;
    }
}

