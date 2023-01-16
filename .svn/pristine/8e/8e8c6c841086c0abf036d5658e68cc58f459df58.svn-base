#include <iostream>
#include <iomanip>
#include "potion.h"

using namespace std;

Potion::Potion()
{
}
    
Potion::~Potion()
{
}

int Potion::health_potion()
{
    cout << endl;
    cout << setw(82);
    cout << "Do you wish to drink the potion?  Y/N" << endl;
    cin >> potion_answer;

    if(potion_answer[0] -= 32 == 'Y')
    {
        health = 5;
    } else
    {
        health = 0;
    }

    return health;
}