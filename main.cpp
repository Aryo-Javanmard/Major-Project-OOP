#include <iostream>
#include <iomanip>
#include "grid.h"
#include "player.h"
#include "enemy.h"
#include "battle.h"
#include "potion.h"

// include all neccesary libraries and header files


using namespace std;

// define main function
int main()
{

	// define size of grid from grid class
	grid grid;
	grid.totalX = 25;
	grid.totalY = 15;

	// define positions of enemies, potion and player from gridObject struct in grid.h
	GridObject obj;
	obj.x = 0;
	obj.y = 0;
	obj.enemy_1_x = 5;
	obj.enemy_1_y = 5;
	obj.enemy_2_x = 15;
	obj.enemy_2_y = 13;
	obj.potion_x = rand() % 10 + 7;
	obj.potion_y = rand() % 10 + 3;

	// define player variables from player class
	Player player;
	int player_health = player.get_health();
	int player_speed = player.get_speed();
	int player_defence = player.get_defence();

	char input = '0';

	// define enemy variables from enemy class
	Enemy enemy_1, enemy_2;
	int enemy_1_health = enemy_1.enemy_health();
	int enemy_1_speed = enemy_1.enemy_speed();
	int enemy_2_health = enemy_2.enemy_health();
	int enemy_2_speed = enemy_2.enemy_speed();

	// define potion 
	Potion potion;
	
	// define battle
	Battle battle;

	// clear terminal window
	system("clear");

	
	




	// initiate iterations, as long as game hasnt been quit
	while (input != 'q')
	{
		// formatted game name, and story printed to terminal.
		cout << setw(85);
		cout << "Welcome to" << endl;

		cout << setw(86);
		cout << "GRID--SQUARE" << endl;
		cout << endl;


        //printed and formated story in terminal
		cout << setw(118);
		cout << "Welcome traveller! as you can see our field has been overrun by bandits" << endl;
		cout << setw(118);
		cout << "I see you have a sword on your belt. Say, if you manage to defeat all of" << endl;
		cout << setw(122);
		cout << "bandits on the field I'll net you a nice reward! Go forth and save our village!" << endl;
		cout << endl;

		// render game grid, from grid class
		grid.Render(obj, enemy_1_health, enemy_2_health);
		cout << endl;

		//display player health
		cout << setw(53);
		cout << "Health: " << player_health<< endl;

		cout << endl;
		cout << endl;

		//display controls 
		cout << setw(61);
		cout << "Press w to go up" << endl;
		cout << setw(63);
		cout << "Press a to go left" << endl;
		cout << setw(63);
		cout << "Press s to go down" << endl;
		cout << setw(64);
		cout << "Press d to go right" << endl;
		cout << setw(69);
		cout << "Press q to quit the game" << endl;
		cout << setw(61);
		cout << "Then press Enter" << endl;
		


		
		//call player input from player class
		input = player.GetInput();

		// input validation for capital letters, lowercase, and incorrect entries
		// making player move from gridobject struct
		if (input == 'a' || input == 'A')
		{
			obj.x -= 1;
			std::system("clear");
		}
		else if (input == 'd' || input == 'D')
		{
			obj.x += 1;
			std::system("clear");
		}
        else if (input == 'w' || input == 'W')
        {
            obj.y -= 1;
			std::system("clear");
        }
        else if (input == 's' || input == 'S')
        {
            obj.y += 1;
			std::system("clear");
        }
		else
		{
			//print invalid entry
			system("clear");
			cout << setw(92);
			cout << "Invalid Entry, try again" << endl;
			cout << endl;
		}

		//validating position of player, making sure it stays on the rendered grid
		if(obj.x < 0)
		{
			obj.x = 0;
		} else if (obj.y < 0)
		{
			obj.y = 0;
		} else if(obj.x > 25)
		{
			obj.x = 25;
		} else if (obj.y > 15)
		{
			obj.y = 15;
		}

		// if player occupies same space as enemy one, call battle enemy 1 function from battle class
		if(obj.x == obj.enemy_1_x && obj.y == obj.enemy_1_y)
		{
			// reprinting story for nice formmatting
			cout << setw(118);
			cout << "Welcome traveller! as you can see our field has been overrun by bandits" << endl;
			cout << setw(118);
			cout << "I see you have a sword on your belt. Say, if you manage to defeat all of" << endl;
			cout << setw(122);
			cout << "bandits on the field I'll net you a nice reward! Go forth and save our village!" << endl;
			cout << endl;
			grid.Render(obj, enemy_1_health, enemy_2_health);
			if(battle.battle_enemy_1(player_health, enemy_1_health, player_speed, player_defence, enemy_1_speed) == false)
			{
				// if returns false, player loses, game over.
				system("clear");
				cout << endl;
				cout << endl;
				cout << setw(85);
				cout << "You lose" << endl;
				cout << endl;
				cout << endl;
				break;
			} else
			{
				// if returns true, player defetes enemy 1, keeps playing
				system("clear");
				cout << endl;
				cout << endl;
				cout << setw(105);
				cout << "Great job, You beat one enemy. One more to go!" << endl;
				cout << endl;
				cout << endl;
				enemy_1_health = 0;
				continue;
			}
		}

		// if player occupies same space as enemy 2, call battle enemy 2 function
		else if(obj.x == obj.enemy_2_x && obj.y == obj.enemy_2_y)
		{
			// repringing story for nice formatting.
			cout << setw(118);
			cout << "Welcome traveller! as you can see our field has been overrun by bandits" << endl;
			cout << setw(118);
			cout << "I see you have a sword on your belt. Say, if you manage to defeat all of" << endl;
			cout << setw(122);
			cout << "bandits on the field I'll net you a nice reward! Go forth and save our village!" << endl;
			cout << endl;
			grid.Render(obj, enemy_1_health, enemy_2_health);
			if(battle.battle_enemy_2(player_health, enemy_2_health, player_speed, player_defence, enemy_2_speed) == false)
			{
				// if returns false, player loses, game over
				system("clear");
				cout << setw(85);
				cout << "You lose" << endl;
				cout << endl;
				cout << endl;
				break;
			} else
			{
				// if returns true, player wins game
				system("clear");
				cout << setw(107);
				cout << "You Win, Congratulations for vanquishing the enemies" << endl;
				cout << endl;
				cout << endl;
				enemy_2_health = 0;
				grid.Render(obj, enemy_1_health, enemy_2_health);
				cout << endl;
				cout << endl;
				break;
			}
		}
		// if player occupies same space as potion, player can get a health buff
		else if(obj.x == obj.potion_x && obj.y == obj.potion_y)
		{
			// reprinting for formatting 
			cout << setw(118);
			cout << "Welcome traveller! as you can see our field has been overrun by bandits" << endl;
			cout << setw(118);
			cout << "I see you have a sword on your belt. Say, if you manage to defeat all of" << endl;
			cout << setw(122);
			cout << "bandits on the field I'll net you a nice reward! Go forth and save our village!" << endl;
			cout << endl;
			grid.Render(obj, enemy_1_health, enemy_2_health);
			player_health += potion.health_potion();
			cout << setw(95);
			obj.potion_x = -1;
			obj.potion_y = -1;
			system("clear");
			// print, health potion aquired
			cout << "Health Potion Aquired, Health: " << player_health << endl;
			cout << endl;
			cout << endl;
		}
		

		

	}
	//end main
	return 0;
}