#include <iostream>
#include <iomanip>
#include "grid.h"

using namespace std;

grid::grid()
{
}

grid::~grid()
{
}


void grid::Render(GridObject obj, int enemy_1, int enemy_2)
	{
		if (enemy_1 == 0)
		{
			cout << setw(45);
			for (int col = 0; col < totalY; col++)
			{
				cout << setw(45) << " ";
				for (int row = 0; row < totalX; row++)
				{
					if (obj.x == row && obj.y == col)
					{
						cout << "░P░";
					}
					else if (obj.enemy_1_x == row && obj.enemy_1_y == col)
					{
						cout << "░±░";
					}
					else if (obj.enemy_2_x == row && obj.enemy_2_y == col)
					{
						cout<<"░E░";
					}
					else if(obj.potion_x == row && obj.potion_y == col)
					{
						cout<<"░+░";
					}
					else
					{
						cout << "░░░";
					}
				}

				cout << endl;
			}
		}
		else if(enemy_1 == 0 && enemy_2 == 0)
		{
			cout << setw(45);
			for (int col = 0; col < totalY; col++)
			{
				cout << setw(45) << " ";
				for (int row = 0; row < totalX; row++)
				{
					if (obj.x == row && obj.y == col)
					{
						std::cout << "░P░";
					}
					else if (obj.enemy_1_x == row && obj.enemy_1_y == col)
					{
						std::cout << "░±░";
					}
					else if (obj.enemy_2_x == row && obj.enemy_2_y == col)
					{
						std::cout<<"░±░";
					}
					else if(obj.potion_x == row && obj.potion_y == col)
					{
						cout<<"░+░";
					}
					else
					{
						std::cout << "░░░";
					}
				}

				std::cout << std::endl;
			}
		}
		else
		{
			cout << setw(45);
			for (int col = 0; col < totalY; col++)
			{
				cout << setw(45) << " ";
				for (int row = 0; row < totalX; row++)
				{
					if (obj.x == row && obj.y == col)
					{
						std::cout << "░P░";
					}
					else if (obj.enemy_1_x == row && obj.enemy_1_y == col)
					{
						std::cout << "░E░";
					}
					else if (obj.enemy_2_x == row && obj.enemy_2_y == col)
					{
						std::cout<<"░E░";
					}
					else if(obj.potion_x == row && obj.potion_y == col)
					{
						std::cout<<"░+░";
					}
					else
					{
						std::cout << "░░░";
					}
				}

				std::cout << std::endl;
			}
		}
	}